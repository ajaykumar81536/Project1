# find the index of the maximum element in a list

n = int(input("Enter the size of List : "))

List = []
index = 0

for i in range(n):
    a = int(input(f"Enter the element at index {i} : "))
    List.append(a)

# print(List[0])
# print(List[-1])    
maxi = List[0]
 
for i in range(n):
    
   if maxi < List[i]:
        maxi = List[i]
        index = i
print(f"Index of Maximum element in the List : {index}")    

#2nd Method : by using max fn and index fn  

var = max(List)
index = List.index(var)
print("Maximum index ",index)