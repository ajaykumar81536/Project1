# Q8. checking a phrase or character is present in string or not?

# Define a string
my_string = "Hello, World!"

# Check if a phrase or character is present
phrase_to_check = "World"
char_to_check = "X"

# Check for a phrase
if my_string.find(phrase_to_check) != -1:
    print(f"The phrase '{phrase_to_check}' is present in the string.")
else:
    print(f"The phrase '{phrase_to_check}' is not present in the string.")

# Check for a character
if my_string.find(char_to_check) != -1:
    print(f"The character '{char_to_check}' is present in the string.")
else:
    print(f"The character '{char_to_check}' is not present in the string.")


# 2nd Method:

# # Check for a phrase
# if phrase_to_check in my_string:
#     print(f"The phrase '{phrase_to_check}' is present in the string.")
# else:
#     print(f"The phrase '{phrase_to_check}' is not present in the string.")

# # Check for a character
# if char_to_check in my_string:
#     print(f"The character '{char_to_check}' is present in the string.")
# else:
#     print(f"The character '{char_to_check}' is not present in the string.")
