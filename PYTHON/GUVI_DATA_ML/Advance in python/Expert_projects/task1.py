# # Get a list of names as input from the user
# input_names = input("Enter a list of names separated by spaces: ").split()

# # Capitalize the first letter of each name
# capitalized_names = [name.capitalize() for name in input_names]

# # Print the modified names as a list
# print("Modified names:")
# for name in capitalized_names:
#     print(name)


# Get a list of names from the user
input_names = input("Enter a list of names separated by spaces: ")

# Split the input string into a list of names
names = input_names.split()

# Capitalize the first letter of each name and create a new list
capitalized_names = [name.capitalize() for name in names]

# Print the modified names as a list
print("Modified names:")
for name in capitalized_names:
    print(name)
