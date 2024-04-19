def fun(a,b):
    c = b-a
    if (c<0):
        return a+b
    else:
        return fun(c,a)
print(fun(12,8))    