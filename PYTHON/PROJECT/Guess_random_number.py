# CREATING A NEW PROJECT 
#NAME : GUESS THE RANDOM NUMBER 

import random

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
    