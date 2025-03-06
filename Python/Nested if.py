# Nested if ....

is_egyptian = input("Are You Egyptian ? Type (Yes) or (No) ").lower() 
if is_egyptian == 'yes' :
    print("Good , You Can GO To The Next Step")

    is_18 = ((input("Are You above 18 ? Type (Yes) or (No) ")).lower() )

    if is_18 == 'yes' :
        print("You Can Have ID")
    else :
        print("Sorry , you have to be 18 or older \nplease try again when you are 18")

else :
    print("Sorry , an Egyptian ID Is GIven To Egyptian.., Thank You")
    
