#REDUCE
from functools import reduce 

list = [1,2,3,4,5]

num = reduce(lambda x,y : x+y, list)

print(num)

num1 = reduce(lambda x,y : x*y, list)
print(num1)

# num2 = list(filter(lambda x:x>5, list))
# print(num2)

