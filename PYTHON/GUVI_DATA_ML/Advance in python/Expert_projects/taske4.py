# Write a Python code to read an integer in a file e.g 123 and convert it to words e.g One hundred and twenty three and write the result back to the same file such that your file will have "123 One hundred and twenty three " in it   in simple way

# Function to convert a number to words
def number_to_words(num):
    # Define lists of words for each place value
    ones = ["", "One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine"]
    teens = ["", "Eleven", "Twelve", "Thirteen", "Fourteen", "Fifteen", "Sixteen", "Seventeen", "Eighteen", "Nineteen"]
    tens = ["", "Ten", "Twenty", "Thirty", "Forty", "Fifty", "Sixty", "Seventy", "Eighty", "Ninety"]
    
    if num == 0:
        return "Zero"

    if num < 10:
        return ones[num]

    if num < 20:
        return teens[num - 10]

    if num < 100:
        return tens[num // 10] + (" " + ones[num % 10] if num % 10 > 0 else "")

    if num < 1000:
        return ones[num // 100] + " Hundred" + (" and " + number_to_words(num % 100) if num % 100 > 0 else "")

    return "Number too large to convert"

# Read the integer from the file
with open("integer.txt", "r") as file:
    integer = int(file.read())

# Convert the integer to words
integer_words = number_to_words(integer)

# Write the result back to the file
with open("integer.txt", "a") as file:
    file.write(integer_words)

print("Conversion completed and written to the file.")
