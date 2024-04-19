# Q4.Use of Type function()

# Example 1: Checking the type of variables
my_string = "Hello, World!"
my_integer = 42
my_float = 3.14
my_bool = True
my_list = [1, 2, 3]
my_dict = {'name': 'John', 'age': 25}

print("Type of my_string:", type(my_string))
print("Type of my_integer:", type(my_integer))
print("Type of my_float:", type(my_float))
print("Type of my_bool:", type(my_bool))
print("Type of my_list:", type(my_list))
print("Type of my_dict:", type(my_dict))
print("\n")


# Function
def my_function():
    b = "Hello, from a function!"
    return b
print("Type of my_fuction: ", type(my_function))
a = my_function()
print(a)