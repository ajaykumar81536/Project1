import pickle

mydict = {"Name":"Ajay", "father_name": "Ashok ram", "mother name": "sunaina devi", "age": "20"}

pic_file = open("file1.txt","wb")
pickle.dump(mydict,pic_file)

pic_file= open("file1.txt","rb")
new_dict = pickle.load(pic_file)

print(new_dict)