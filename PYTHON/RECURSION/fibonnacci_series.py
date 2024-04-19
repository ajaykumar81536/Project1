# fibonnacci series :-> 0, 1,1,2,3,5,8,13.....

def fibonnaci_series(n):
    if (n==1):
        return 0
    elif (n==2):
        return 1
    else:
        # fibonnaci_series(n)=fibonnaci(n-1)+fibonnaci(n-2)
        return fibonnaci_series(n-1) + fibonnaci_series(n-2)
    # print(fibonnaci_series(n))    
    


num = int(input("Enter the number : "))
fibonnaci_series(num)
print("nth fibonnaci number : ", fibonnaci_series(num))
