#HWHILE LOOP
# FOR LOOP
# CONTINUE AND BREAK

list1= [5,2,3,7,8,9,10]
list2 = ["Ajay", "munni", 2,1,3,5,7,8.18, 19.00]

for items in list1 :
    if items>3 :
        print(items)
        
print("second list start here") 
     
for items in list2 :
    if str(items).isnumeric() and items >= 4 :
        print(items)

#WHILE LOOP 

i=0
while (i<50) :
   # print(i)
    i=i+1

print("2nd while loop")
j=1
num = int(input("enter the number"))
print("Total even number inbetween 1 and ", num )

while(j*2 <= num) :
    print(j*2)
    j= j+1
    
#BREAK AND CONTINUE
# CONTINUE :- loop runs before continue and 
#            they can't see any elements below the continue... , directly reach at the beginning of the loop
# BREAK :- after break loop will stop             

k =0
while(True) :
    print(k, end="  ")
    if(k==45):
        break 
    k = k+1
    
    
    