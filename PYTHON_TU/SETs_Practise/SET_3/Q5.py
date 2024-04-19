# Function to check if a list is a palindrome using list slicing
def is_palindrome_using_slicing(some_list):
    if (some_list == some_list[::-1]):
        return some_list

# Example lists
list1 = [1, 2, 3, 2, 1]
list2 = [1, 2, 3, 4, 5]

# Checking if the lists are palindromes using list slicing
print("List 1:", list1)
if is_palindrome_using_slicing(list1):
    print("List 1 is a palindrome")
else:
    print("List 1 is not a palindrome")

print("\nList 2:", list2)
if is_palindrome_using_slicing(list2):
    print("List 2 is a palindrome")
else:
    print("List 2 is not a palindrome")
