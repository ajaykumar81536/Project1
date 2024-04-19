import json

dictLikejson = '{"name": "Ajay", "language": ["hindi","english"]}'

new_dict = json.loads(dictLikejson)

print(new_dict)

#  convert dictionary into json 


person = {"Name":"Ajay",
           "father_name": "Ashok ram",
           "mother name": "sunaina devi"}

person_json = json.dumps(person)

print(person_json)

