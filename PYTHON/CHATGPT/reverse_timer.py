import time

def reverse_timer(seconds):
    while seconds > 0:
        print(f"Time left: {seconds} seconds")
        time.sleep(1)
        seconds -= 1

    print("Time's up!")

if __name__ == "__main__":
    try:
        seconds_input = int(input("Enter the number of seconds for the timer: "))
        reverse_timer(seconds_input)
    except ValueError:
        print("Invalid input. Please enter a valid integer.")
