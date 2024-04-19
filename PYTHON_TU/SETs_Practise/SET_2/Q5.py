# print all even numbers bw 1 and 50

num = int(input("Enter the value for finding all even numbers: "))
list = []

for i in range(1,num+1):
    
    if i%2 == 0:
        list.append(i)
    
print(f"total even number between 1 and {num} is : ", list)            
       
    