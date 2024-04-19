# Here we learnt about functions and
# Doc string :-> This is first line comments in functions bw"""

a = 5
b = 8 

#summation = sum((a,b)) #built in function
#print(summation)

#user defined function

def summation(a,b):
    """ This is function of finding of summation of two numbers """
    c = a+b
    return c

summation(a,b)
print(summation(a,b))

def average(a,b) :
    """ This is function of finding average of two numbers """
    c = (a+b)/2
    return c

d=average(a,b)
print(d)
print(average.__doc__)  # doc string 
print(summation.__doc__)


