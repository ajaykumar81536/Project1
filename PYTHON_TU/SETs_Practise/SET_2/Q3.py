# calculate the sum of digits in a given number 

num = int(input("Enter the number : "))
ans = 0

while(num>0):
    ls_digit = num % 10
    ans = ans + ls_digit
    temp = num/10
    num = int(temp)
    
print("summation of all digits : ", ans)    
    
    