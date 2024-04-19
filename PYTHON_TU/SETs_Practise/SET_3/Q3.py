# find the sum of all the items in a list.

#Method1:

n = int(input("Enter the size of List : "))
List = []
summ = 0

#take input in List
for i in range(n):
    a = int(input(f"Enter the value at index {i}: "))
    List.append(a)

for i in range(n):
    temp = List[i]
    summ = summ + temp
    
print(f"Summation of all elements in given List is {summ} ")    
        