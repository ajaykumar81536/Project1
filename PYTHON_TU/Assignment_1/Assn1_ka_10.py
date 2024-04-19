""" # Q10. Try the following string functins:
count(), islower(), isnumeric(), lower(),upper(),partition(),swapcase()

"""

var1 = "Hello_world I am Ajay kumar "

print(var1.count('a'))  #count 
print(var1.count("o"))

print("var1 is lower ? : ", var1.islower()) #check sting is lower or not
print("var1 is Upper ? : ", var1.isupper()) #check for upper

print("var1 is numeric or not ? :", var1.isnumeric()) 
print("var1 is alphabets or not ? : ", var1.isalpha())

print(var1.lower()) #print whole string in lower case
print(var1.upper()) #print whole string in upper case

print(var1.partition("world")) #partition at world so this divided into three parts
print(var1.lower())
print(var1.swapcase()) # convert lower to upper string or viceversa


