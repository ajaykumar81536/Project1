# Dictionay is nothing but key value pairs

dictionary1 = {}  #type dictionary
dictionary2 = ()  #tuple

#print(type(dictionary1))
#print(type(dictionary2))

dictionary1 = {"Ajay": "veg", "Suraj" : "Non_veg", "Manish": "chicken_only", "Munni" : {"breakfast": "tea", "launch": "biryani", "dinner": "mutton"}}
print(dictionary1)
print(dictionary1["Ajay"])
print(dictionary1["Suraj"])
print(dictionary1["Munni"]["launch"])

dictionary1["jhunni"] = "junk food" # add dictionary element from outside
dictionary1["Ashok_ram"] = "Pure veg"
dictionary1[8]="Ajayyyyykr"

print(dictionary1)

dec3 = dictionary1.copy() # copy dict..1 into dec 3
print(dictionary1)

dic3 = dictionary1 # direct assign into dic3 without copying
del dictionary1["Manish"]
print(dictionary1)

print(dictionary1.keys())
print(dictionary1.values())



