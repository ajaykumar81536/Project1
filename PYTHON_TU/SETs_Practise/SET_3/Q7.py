# Function to find the sum of the first n/2 elements and multiplication of the remaining n/2 elements in a list
def sum_and_multiplication(input_list):
    n = len(input_list)
    first_half_sum = sum(input_list[:n//2])  # Sum of the first n/2 elements
    second_half_multiplication = 1
    for num in input_list[n//2:]:  # Multiplication of the remaining elements
        second_half_multiplication *= num
    return first_half_sum, second_half_multiplication

# Example list
my_list = [1, 2, 3, 4, 5, 6, 7, 8]

# Finding the sum of the first n/2 elements and multiplication of the remaining n/2 elements
result_sum, result_multiplication = sum_and_multiplication(my_list)
print("List:", my_list)
print("Sum of first n/2 elements:", result_sum)
print("Multiplication of remaining n/2 elements:", result_multiplication)
