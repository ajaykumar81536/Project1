# calculate the factorial of a given number

a = int(input("Enter the value : "))
b = 1
 
for i in range(1,a+1):
   
    b = b*i
    
print(f"factorial of {a} is ", b) 
    