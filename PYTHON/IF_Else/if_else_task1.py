#Design a faulty calcultor for specific values(45I3=555, 56+9 = 77, 56/6=4)
#except given values....all are correct
#and given values output gives faulty result

var1 = int(input("Enter the first number : "))

var2 = int(input("Enter the second number : "))

operator = (input("Enter what operation u want ? "))

if (var1==45) & (var2 == 3) & (operator =='*') :
    print("555")
elif (var1==56) & (var2==9) & (operator=='+') :
    print("77")
elif (var1==56) & (var2==6) & (operator== '/') :
    print("4")
else :
    print("Output of entered values is :")
    
    if (operator == "+") :
        print(var1 + var2)
    elif (operator == "-") :
        print(var1-var2)
    elif (operator == "*") :
        print(var1*var2)
    elif (operator == "/") :
        print(var1/var2)

        
        
    