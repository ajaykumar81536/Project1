# IN Recursion .....function call your self and last last have a base case

def factorail_rec (n) :
    
    if n == 1:
        return 1
    else :
      
        return n * factorail_rec(n-1)
      
    
    
num = int(input("Enter the number : "))
factorail_rec(num)
print(factorail_rec(num))

    