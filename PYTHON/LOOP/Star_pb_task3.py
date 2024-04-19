num = int(input("Enter the number  "))

bool_var = input(" Enter 1 or 0 : ")

if (bool_var == 1) :
    for i in range(1, num+1):
        for j in range(1, i+1):
            print("*" *i)
    
            
           
elif (bool_var==0) :
    
    for i in range(num,0,-1):
        for j in range(1,i+1):
          print("*", end="")
        print()
 