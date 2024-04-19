# // we can print multicomments as a strin

# a = """ HELLO ,
#                I AM AJAY KUMAR 
#     AND WHAT ABOUT YOU..?
#     I HOPE ALL GOOD..!
    
#     BTW , IT'S NICE TO MEET YOU ..!   

# """
# print(a)

x = "Hello , world !! "
y = "I am Ajay kumar"

print(len(x))
print(x[0])
print("Ajay" in y)  # return True
print("ajay" in y)  # return false , bec not found in string

# Slicing in string

print(x[2:18]) #print from 2 index to before 18
print(x[:])    
print(x[:6])    #print till 5th index
print(y[-6:-1])
print(x[::-1])

print(x.upper())
print(y.upper())
print(x.capitalize())

print(y.replace("Ajay", "Suraj"))
print(x.strip())
print(x.split(","))
print(x.lower())
print(y.lower())


