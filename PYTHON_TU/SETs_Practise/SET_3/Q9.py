# Function to check if a number is prime
def is_prime(num):
    if num < 2:
        return False
    for i in range(2, int(num ** 0.5) + 1):
        if num % i == 0:
            return False
    return True

# Function to check if each number in the list is prime
def all_primes(input_list):
    return all(is_prime(num) for num in input_list)

# Sample lists
lists = [
    [0, 3, 4, 7, 9],
    [3, 5, 7, 13],
    [1, 5, 3]
]

# Checking if each number in the lists is prime
for lst in lists:
    result = all_primes(lst)
    print(f"{lst} -> {result}")

