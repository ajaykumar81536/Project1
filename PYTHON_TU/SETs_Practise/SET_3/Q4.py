# reverse the element in a list 
# slice the list in both ways

n = int(input("Enter the size of List : "))
List = []

for i in range(n):
    a = int(input())
    List.append(a)

# revere the list
print("Reversing the List : ", List[::-1])

#slice the list
slicee = input("you want slicing the List ?? y or n : ")
if (slicee == 'y'):
    print(f"printing the original list from 0 index to n-1: {List[0:n]}")
    print(f"printing the list from 1 index to n-1 with 2 difference:{List[1:n:2]}")
    print(List[::-2]) #print list from backward with 2 difference
