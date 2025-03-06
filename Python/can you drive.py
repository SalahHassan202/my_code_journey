# can you drive....

age = int(input("Please Enter Your Age : "))
licence = input("Do You Have A Licence ? Type (Yes) or (No)")
if age > 18 and licence.lower() == "yes" :
    print("You Can Drive!")
elif age < 18 or licence.lower() == "no" :
    print("sorry , You Cannot Drive!")
else :
    print("sorry , you entered {licence} is not understand")
