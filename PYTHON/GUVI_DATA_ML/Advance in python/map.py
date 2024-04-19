# MAP :- This is used for converting a to b.. like string into int  in a single line 
#         without using any loops or any lengthy method

# map(a,b) means converting b into a 

num1 = [1,2,3,4,5,6,7,8]

square = list(map(lambda x : x*x ,num1))

print("Before list num1 ", num1)
print("After using map ", square)