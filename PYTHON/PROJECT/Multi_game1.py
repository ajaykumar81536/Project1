# CREATING A NEW PROJECT :
"""
INCLUDE: its a Quiz game in which you get point if you give correct answer!

"""
import random

print ("\nWelcome to Quiz Game ! \n")

playing = input("Do You want to Play (y/n)? : ")

if playing.lower() != "y" :
    quit()  # immediate stop the whole program after that....

print("\nOkay! Let's Play :) ")

print("\nChoose your favourite game no : \n")

print(f"Choose 1 : for Full-Form of Words !")
print(f"Choose 2 : for Calculator Game !")
print(f"Choose 3 : for Truth and Dare !")
print(f"Choose 4 : for randome integer Prediction !\n")

option = input("Enter the value : ")

#QUIZ GAME : -------------------------------------------------------------------------------------------------------------------------

if option == "1" :
    score = 0
    ans = input("What is the Full-form of CPU ? ")
    if ans.lower() == "central processing unit" :
        print("Correct !")
        score += 1
    else: 
        print("Incorrect !")

    ans = input("What is the Full-form of GPU ? ")
    if ans.lower() == "graphic processing unit" :
        print("Correct !")
        score += 1
    else: 
        print("Incorrect !")

    ans = input("What is the Full-form of ALU ? ")
    if ans.lower() == "algorithm logic unit" :
        print("Correct !")
        score += 1
    else: 
        print("Incorrect !")

    ans = input("What is the Full-form of IIT ? ")
    if ans.lower() == "indian institute of technology" :
        print("Correct !")
        score += 1
    else: 
        print("Incorrect !")
        
    ans = input("What is the Full-form of RAM ? ")
    if ans.lower() == "random access memory" :
        print("Correct !")
        score += 1
    else: 
        print("Incorrect !")  

    ans = input("What is the Full-form of ROM ? ")
    if ans.lower() == "read only memory" :
        print("Correct !")
        score += 1
    else: 
        print("Incorrect !")  

    print(f"Congrats !! , you got score : {score}")   
    print("I hope you Enjoy it ! ")   

# CALCULATOR GAME :---------------------------------------------------------------------------------------------------              

elif option == '2' :

    print("\nWelcome to the Calculation World !! \n")

    while(True):
        print("Choose the Operation : \n")

        print("Press 1 : For Addition (+) : ")
        print("Press 2 : For Subtraction (-) : ")
        print("Press 3 : For Multiplication (X) : ")
        print("Press 4 : For Division (/) : ")
        print("Press 5 : For Power (^) : ")
        print("Press 6 : For Average  : ")
        print("Press 7 : For Percentage : \n")

        cal = input("Enter the value : ")

        if cal == '1' :
            n1 = int(input("Enter the 1st num : "))
            n2 = int(input("Enter the 2nd num : "))
            res = n1+n2

            print("result : ",  res)
        elif cal == '2' :
            n1 = int(input("Enter the 1st num : "))
            n2 = int(input("Enter the 2nd num : "))
            res = n1-n2

            print("result : ", res )   
        elif cal == '3' :
            n1 = int(input("Enter the 1st num : "))
            n2 = int(input("Enter the 2nd num : "))
            res = n1*n2

            print("result : ", res )             
        elif cal == '4' :
            n1 = int(input("Enter the 1st num : "))
            n2 = int(input("Enter the 2nd num : "))
            res = n1/n2

            print("result : ", res )        
        elif cal == '5' :
            n1 = int(input("Enter the 1st num : "))
            n2 = int(input("Enter the 2nd num : "))
            res = n1 ** n2

            print("result of a^b expression : ", res )  

        elif cal == '6' :
            n1 = int(input("Enter the 1st num : "))
            n2 = int(input("Enter the 2nd num : "))
            res = (n1+n2)/2

            print("result : ", res )              
        elif cal == '7' :
            n1 = int(input("Enter the Total marks : "))
            n2 = int(input("Enter the Obtained marks : "))
            res = (n2/n1)*100

            print(f"Percentage : {res} % " )        

        play = input("Do you want to play again (y/n)?")
        if play.lower() == "y" :
            continue
        else :
            print("\nI hope you Enjoy it !!")
            break    

# RANDOM GUESS NUMBER GAME : ---------------------------------------------------------------------------------------------
                
if option == '4':
    # CREATING A NEW PROJECT 
#NAME : GUESS THE RANDOM NUMBER 

    while(True):
        Top_range = input("Enter the Top Range : ")

        if Top_range.isdigit():  # check number is digit or not?

            Top_range = int(Top_range)
            
            if Top_range <= 0 :
                print("Please Enter the larger number next time ")
                continue   # if number is -ve then continue again
            else:
                break    # if number is +ve then come out from while loop
        else :
            print("Please Enter the Digit next time ")
            continue    # if number is non digit so... re enter the digit

    new_num = random.randint(0, Top_range)   # random.randint(a,b) here a and b is inclusive, but in randrange(a,b) , b-1 is inclusive

    Total_guess = 0

    while(True):
        user_guess = input("\nEnter the guess number : ")

        if user_guess.isdigit():

            user_guess = int(user_guess)
            Total_guess += 1

            if user_guess < 0 :
                print("\nPlease enter above of zero : ")
                continue
            elif user_guess == new_num :
                print("\nYou won the Match ! ")
                break

            elif user_guess > new_num :
                print("You were above the number ")
            else: 
                print("You were below the number ")

    print("Total Guesses are ", Total_guess)
    print("\nFinally you won the Match")
    print("I hope you enjoy it !! \n")
                