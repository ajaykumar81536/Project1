variable1 = "Hello, I m Ajay kumar"
variable2 = "HelloImAjayKumar"

print(variable1.isalnum())  #check alphabets nd numeric
print(variable1.isalpha())  #check alphabet
print(variable2.isalpha())
print(variable1.endswith("kumar"))  # check ends with specific letter

print(variable1.count("m")) # counting a specific number 
print(variable2.count('a'))

print(variable1.find("m"))  #finding elements at what index position
print(variable1.find("umar"))

print(variable1.upper())   #change whole string into Upper case
print(variable1.lower())   #into lower case
print(variable2.upper())

print(variable1.replace(" m ", "  is  "))   #replace element with another
print (variable2.replace("K","KK"))
print(variable2.find("Ajay"))