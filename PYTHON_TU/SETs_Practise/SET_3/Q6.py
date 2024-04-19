# Example list
my_list = [1, 2, 3, 4, 5, 6, 7, 8, 9]

# Using list comprehension to find the sum of squares of odd numbers
sum_of_squares_odd = sum(x ** 2 for x in my_list if x % 2 != 0)

print("List:", my_list)
print("Sum of squares of odd numbers:", sum_of_squares_odd)
