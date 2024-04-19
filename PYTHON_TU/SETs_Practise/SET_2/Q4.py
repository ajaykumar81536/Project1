# generate the fibonacci series upto a specified terms

# fibonacci series : 0,1,1,2,3,5,8....

terms = int(input("Enter the terms for Fibonacci series : "))
a=0
b=1

if terms <= 0:
    print("Enter a valid input")
elif terms == 1:
    print (0)
elif terms == 2:
    print(0)
    print(1)
    
else:
     print (0)
     print(1)
     for i in range(terms-2):
       
        c=a+b
        print(c)
        a,b = b, c
        
        