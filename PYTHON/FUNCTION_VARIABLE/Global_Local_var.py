# Global variable :-> A variable that have Global Scope or say they can access for whole entire Programm
# Local varible :-> A variable that have Local scope and they can only accessable in that particular function

Glob_var = 15
x = 120

def function1() :
    global x
    x = x+20
    
    loc_var = 23
    Glob_var = 25  # This is local variable not globally accessable
    Glob_var += 5  # we cannot change global varibale directly
    print(x)
    
    print("calling from function1 , global var = ", Glob_var)
    # function2()
    
    # def function2() :
    #     # loc_var += 5
    #     print("after calling function2(), loc_var = ", loc_var)
        
        
    
    
function1()

print("calling from main fn or globally , global var = ", Glob_var) 