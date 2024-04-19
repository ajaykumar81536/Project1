# take input as a character and check vowel and consonant


def char_checker(ch) :
    ch = ch.lower()
    
    if ch in ('a', 'e', 'i', 'o', 'u'):
        print("VOWEL")
    else:
        print("CONSONANT")
        
while(True):       
 ch = input("Enter the a single character : ")

 if len(ch) == 1 and ch.isalpha():
    char_checker(ch)
    break
 else:
    print("Enter the valid input !")
    continue