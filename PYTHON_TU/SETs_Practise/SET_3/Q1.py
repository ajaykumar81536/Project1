# # find the duplicate elements in two lists and print the elements

# n1 = int(input("Enter size of the 1st List : "))
# n2 = int(input("Enter size of the 2nd List : "))
# list1 = []
# list2 = []

# for i in range(n1):
#     a = int(input("Enter the element of 1st list : "))
#     list1.append(a)

# print (list1)   
 
# for i in range(n2):
#     a = int(input("Enter the element of 2nd list : "))
#     list2.append(a)

# print(list2)    


# Method 1: Using list comprehension and set intersection to find duplicates
def find_duplicates_method1(list1, list2):
    duplicates = list(set([x for x in list1 if x in list2]))
    return duplicates

# Method 2: Using set and intersection to find duplicates
def find_duplicates_method2(list1, list2):
    duplicates = list(set(list1) & set(list2))
    return duplicates

# Method 3: Using loops to find duplicates
def find_duplicates_method3(list1, list2):
    duplicates = []
    for item in list1:
        if item in list2 and item not in duplicates:
            duplicates.append(item)
    return duplicates

# Example lists
list1 = [1, 2,2, 3, 4, 5, 5, 6]
list2 = [4, 5, 6, 6, 7, 8]

# Find and print duplicates using different methods
print("Method 1 - Using list comprehension and set intersection:")
print("Duplicate elements:", find_duplicates_method1(list1, list2))

print("\nMethod 2 - Using set intersection:")
print("Duplicate elements:", find_duplicates_method2(list1, list2))

print("\nMethod 3 - Using loops:")
print("Duplicate elements:", find_duplicates_method3(list1, list2))

