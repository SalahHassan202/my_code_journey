# guess the password against pc...

import random 
pin_code = random.randint(1000 , 9999)       ## pin_code must be 4 digit 

user_input = int(input("enter 4-digit pin code : "))
if len(str(user_input)) != 4 :
    print("Please enter 4 digit.")

elif user_input == pin_code :
    print("Sucess! pin code is matched")

else :
    print("Failure! pin code is not matched")
    print(f"the computer generated this {pin_code}")