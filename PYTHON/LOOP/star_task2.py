n1 = int(input("How many rows you want to print\n"))
n2 = input("Please enter true or False\n")
if n2 == "True":
    for i in range(1,n1+1):
        print("*"* i)
else:

    for i in range(n1, 0, -1):
        print("*" * i)