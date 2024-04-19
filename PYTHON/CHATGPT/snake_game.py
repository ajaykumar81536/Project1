import pygame
import time
import random

pygame.init()

# Screen dimensions
SCREEN_WIDTH, SCREEN_HEIGHT = 800, 600

# Colors
WHITE = (255, 255, 255)
RED = (255, 0, 0)
GREEN = (0, 255, 0)
BLACK = (0, 0, 0)

# Snake block size and speed
BLOCK_SIZE = 20
SNAKE_SPEED = 15

# Create the game window
screen = pygame.display.set_mode((SCREEN_WIDTH, SCREEN_HEIGHT))
pygame.display.set_caption("Snake Game")

# Snake function
def snake(snake_list):
    for block in snake_list:
        pygame.draw.rect(screen, GREEN, [block[0], block[1], BLOCK_SIZE, BLOCK_SIZE])

# Main game function
def game_loop():
    game_over = False
    game_close = False

    snake_list = []
    snake_length = 1

    snake_head_x = SCREEN_WIDTH / 2
    snake_head_y = SCREEN_HEIGHT / 2

    snake_head_x_change = 0
    snake_head_y_change = 0

    food_x = round(random.randrange(0, SCREEN_WIDTH - BLOCK_SIZE) / BLOCK_SIZE) * BLOCK_SIZE
    food_y = round(random.randrange(0, SCREEN_HEIGHT - BLOCK_SIZE) / BLOCK_SIZE) * BLOCK_SIZE

    clock = pygame.time.Clock()

    while not game_over:

        while game_close:
            screen.fill(WHITE)
            font_style = pygame.font.SysFont(None, 50)
            message = font_style.render("You Lost! Press Q-Quit or C-Play Again", True, RED)
            screen.blit(message, (SCREEN_WIDTH / 6, SCREEN_HEIGHT / 3))

            pygame.display.update()

            for event in pygame.event.get():
                if event.type == pygame.KEYDOWN:
                    if event.key == pygame.K_q:
                        game_over = True
                        game_close = False
                    if event.key == pygame.K_c:
                        game_loop()

        for event in pygame.event.get():
            if event.type == pygame.QUIT:
                game_over = True
            if event.type == pygame.KEYDOWN:
                if event.key == pygame.K_LEFT:
                    snake_head_x_change = -BLOCK_SIZE
                    snake_head_y_change = 0
                elif event.key == pygame.K_RIGHT:
                    snake_head_x_change = BLOCK_SIZE
                    snake_head_y_change = 0
                elif event.key == pygame.K_UP:
                    snake_head_y_change = -BLOCK_SIZE
                    snake_head_x_change = 0
                elif event.key == pygame.K_DOWN:
                    snake_head_y_change = BLOCK_SIZE
                    snake_head_x_change = 0

        if snake_head_x >= SCREEN_WIDTH or snake_head_x < 0 or snake_head_y >= SCREEN_HEIGHT or snake_head_y < 0:
            game_close = True

        snake_head_x += snake_head_x_change
        snake_head_y += snake_head_y_change

        screen.fill(WHITE)
        pygame.draw.rect(screen, BLACK, [food_x, food_y, BLOCK_SIZE, BLOCK_SIZE])
        snake_head = []
        snake_head.append(snake_head_x)
        snake_head.append(snake_head_y)
        snake_list.append(snake_head)

        if len(snake_list) > snake_length:
            del snake_list[0]

        for block in snake_list[:-1]:
            if block == snake_head:
                game_close = True

        snake(snake_list)

        pygame.display.update()

        if snake_head_x == food_x and snake_head_y == food_y:
            food_x = round(random.randrange(0, SCREEN_WIDTH - BLOCK_SIZE) / BLOCK_SIZE) * BLOCK_SIZE
            food_y = round(random.randrange(0, SCREEN_HEIGHT - BLOCK_SIZE) / BLOCK_SIZE) * BLOCK_SIZE
            snake_length += 1

        clock.tick(SNAKE_SPEED)

    pygame.quit()
    quit()

game_loop()
