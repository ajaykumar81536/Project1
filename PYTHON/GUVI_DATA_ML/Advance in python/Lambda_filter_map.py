# LAMBDA 

x = lambda a : a+20
print(x(5))

y = lambda a,b : a+b
print(y(5,8))

def fun(n):
    lambda a: a*n
    return lambda a: a*n

tripler = fun(3)
fivetimes = fun(5)
lakhs = fun(1000000)

print(tripler(10))
print(fivetimes(10))
print("lakhs time", lakhs(5000))