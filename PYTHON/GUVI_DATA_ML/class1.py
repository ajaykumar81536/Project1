class Hero :
    def __init__(self,name,age):
        self.name = name
        self.age = age
        
    def methods(self):
        print("My name is " + self.name)
        # print("My age is "+ self.age)    
    # name = "sharukh_khan"
    # age = 58
h1 = Hero("Ajay",19)
h2 = Hero("Munni",17)

# print(h1.name)
# print(h1.age)        

h1.methods()
h2.methods()