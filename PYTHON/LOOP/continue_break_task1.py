# ENTER any number while they are greater than 100
# if > 100 print congrats else Try again and re_enter the number

while (True) :
    num = int(input("Enter the number \n"))
    
    if(num>100) :
        print ("Congrats you hav entered a number greater than 100 \n")
        break
    else :
        print("Try again ! \n")
        continue

    print("after continue")