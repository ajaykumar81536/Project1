# WAP that takes three numbers as input from user and prints the smallest of the three numbers.

a = int(input("Enter the 1st value : "))
b = int(input("Enter the 2nd value : "))
c = int(input("Enter the 3rd value : "))

if ((a<b) and (a<c)) :
    print("smallest number :", a)
elif (b<a) and (b<c) :
    print("smallest number :", b) 
else :
    print("smallest number :", c)   