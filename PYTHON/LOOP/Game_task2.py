# no of guesses 9
# print no of guesses left
# NO of guesses he took to finish
#game over at last

num1 = 18
i=0
count = 0

while (i<=9) :
    num = int(input("Guess the number : \n"))
    i=i+1
    
    if (num == 18) :
         print("Congratulations , You Win !! \n")
         break
         
    elif i==9 :
         print("Game over....YOU loss the game !! \n")
         break
     
    elif (num>18) :
         #i= i-1
         count = count+1
         print("Number of guesses Left ! ", 9-i)
         print("Number of guesses you allready used \n", count)
         continue
    elif (num<18) :
         #i= i-1
         count=count+1
         print("Number of guesses Left ! ", 9-i)
         print("Number of guesses you allready used \n", count)
         continue
     
         
        
         