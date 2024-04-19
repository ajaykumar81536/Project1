import pygame
import random

# Initialize pygame
pygame.init()

# Colors
WHITE = (255, 255, 255)
GREEN = (0, 255, 0)
RED = (255, 0, 0)

# Screen dimensions
WIDTH, HEIGHT = 640, 480

# Create the screen
screen = pygame.display.set_mode((WIDTH, HEIGHT))
pygame.display.set_caption("Snake Game")

# Snake initial position and velocity
snake = [(WIDTH // 2, HEIGHT // 2)]
velocity = (1, 0)  # Moving right by default

# Food position
food = (random.randint(0, WIDTH // 20 - 1) * 20, random.randint(0, HEIGHT // 20 - 1) * 20)

# Game clock
clock = pygame.time.Clock()

running = True
while running:
    for event in pygame.event.get():
        if event.type == pygame.QUIT:
            running = False
        if event.type == pygame.KEYDOWN:
            if event.key == pygame.K_UP and velocity != (0, 1):
                velocity = (0, -1)
            elif event.key == pygame.K_DOWN and velocity != (0, -1):
                velocity = (0, 1)
            elif event.key == pygame.K_LEFT and velocity != (1, 0):
                velocity = (-1, 0)
            elif event.key == pygame.K_RIGHT and velocity != (-1, 0):
                velocity = (1, 0)

    # Update snake position
    new_head = ((snake[0][0] + velocity[0] * 20) % WIDTH, (snake[0][1] + velocity[1] * 20) % HEIGHT)
    if new_head in snake or new_head[0] % 20 != 0 or new_head[1] % 20 != 0:
        running = False
        print("Game Over!")
    else:
        snake.insert(0, new_head)

        # Check if the snake eats the food
        if new_head == food:
            food = (random.randint(0, WIDTH // 20 - 1) * 20, random.randint(0, HEIGHT // 20 - 1) * 20)
        else:
            snake.pop()

        # Draw everything
        screen.fill(WHITE)
        for segment in snake:
            pygame.draw.rect(screen, GREEN, (segment[0], segment[1], 20, 20))
        pygame.draw.rect(screen, RED, (food[0], food[1], 20, 20))

        pygame.display.flip()
        clock.tick(10)

pygame.quit()
