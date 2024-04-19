# Q5.Casting variable form one type to another

# Integer to Float
integer_number = 42
float_number = float(integer_number)
print("Integer to Float:", float_number)

# Float to Integer
float_number = 3.14
integer_number = int(float_number)
print("Float to Integer:", integer_number)

# String to Integer or Float
string_number = "123"
integer_from_string = int(string_number)
float_from_string = float(string_number)
print("String to Integer:", integer_from_string)
print("String to Float:", float_from_string)

# Integer or Float to String
number = 42
string_from_number = str(number)
print("Number to String:", string_from_number)

# List to Set
my_list = [1, 2, 3, 4, 5]
my_set = set(my_list)
print("List to Set:", my_set)

# Set to List
my_set = {1, 2, 3, 4, 5}
my_list = list(my_set)
print("Set to List:", my_list)

# Dictionary to List of Keys, Values, or Items
my_dict = {'name': 'John', 'age': 25, 'city': 'New York'}
keys_list = list(my_dict.keys())
values_list = list(my_dict.values())
items_list = list(my_dict.items())
print("Dictionary to Keys:", keys_list)
print("Dictionary to Values:", values_list)
print("Dictionary to Items:", items_list)

# String to List of Characters
my_string = "Hello, World!"
char_list = list(my_string)
print("String to List of Characters:", char_list)
