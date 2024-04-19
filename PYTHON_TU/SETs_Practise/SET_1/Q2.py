# find largest using nested loop

a = int(input("Enter the 1st value : "))
b = int(input("Enter the 2nd value : "))
c = int(input("Enter the 3rd value : "))

if (a>b) :
    if (a>c):
        print("largest element :", a)
    
else:
     if (b>a) :
            if(b>c):
                print("largest element :", b)
            
                
            else:
                   print("largest element :", c)
            