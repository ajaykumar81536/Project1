# PASSWORD MANGER PROJECT....in which we encrypt password and decrypt it

from cryptography.fernet import Fernet

def write_key():
    key = Fernet.generate_key()
    with open('key.key', 'wb') as key_file:
        key_file.write(key)

def load_key():
    file = open('key.key', 'rb')
    key = file.read()
    file.close()
    return key

key = load_key()
fer = Fernet(key)

def view():
    with open('passwords.txt', 'r') as f:
        for line in f.readlines():
            data = line.rstrip()
            user, passw = data.split("|")
            print("User:", user, "| Password:",
                  fer.decrypt(passw.encode()).decode())
    

def add():
    name = input('Account Name: ')
    pwd = input("Password: ")

    with open('passwords.txt', 'a') as f:
        f.write(name + "|" + fer.encrypt(pwd.encode()).decode() + "\n")
        

while True :
    mode = input("Would you like to 'Add' Password or 'view' existing password or quit (add/view/quit) ? : ").lower()

    if mode == 'quit' :
        print("\nOkay Thank You !")
        break
    elif mode == 'add' :
        add()

    elif mode == 'view' :
        view()
    else :
        print("\nPlease enter valid input !")
        continue

