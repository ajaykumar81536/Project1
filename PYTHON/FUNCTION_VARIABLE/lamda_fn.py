# LAMBDA FN :-> its a type of function where we write code in linear form

def addition(a,b):
    return a+b

addition(9,6)
print("Normal fn method : ", addition(9,6))

addition = lambda x, y : x+y
print("Lambda function method : ", addition(9,6))

minus = lambda a, b : a-b
print("Lambda function method : ", minus(9,6))  