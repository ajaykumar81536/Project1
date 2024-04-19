dict1 = {"Ajay": "vegeterian", 
         "Munni" : "Non_vegeterain",
         "set": "set of natural no.."}
#print(dict1)

#FOR LOOP 

list1 = [["Ajay",1], ["munni ", 2], ["rinku", 3], ["jhunni", 4]] #list_of_list
dict2 = dict(list1)  #convert list into dictionary
print(dict2)

tupple1 = ("Harry", "larry", "marrie", "carry") #print tuple
for item in tupple1 :
    print(item)
    

for items, serialwise in list1 :  #print list of list
    print(items,"serialwise no is : ", serialwise)
    
for item , serialwise in dict2.items() :    #print list of list or say dict and their items
    print(item, serialwise)    

for keys in dict2 : #print only keys of dict or list
    print(keys)
    
    
    


