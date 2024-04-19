var1 = 6
#print(type(var1))

print("What is your age ? ")
age = int(input())

if (age>5) & (age<100) :
    print("it's valid input ")
    
    if age>18 : 
        print("You are eligible for driving license ")
    elif age==18 :
        print("You should appear for physical reporting then we decide...")
    else :
        print("You aren't eligible for driving license "
              )    
else :
    print("Invalid age limit ")
    
            