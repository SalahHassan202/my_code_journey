# chose the area.....

area = input("chose an area :(cairo) , (tanta) , or (alexandria)\n")
if area.lower() == "cairo" :
    print("You Chose Cairo")
elif area.upper() == "TANTA" :
    print ("Tanta is nice")
elif area.lower() == "alexandria" :
    print ("Feels like summer!")
else :
    print (f"sorry , {area} is not on our list , thank you")
