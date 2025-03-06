############## اختصار الجمل الشرطيه ########################

area = input("chose an area :(cairo) , (tanta) , or (alexandria)\n")

if area.lower() == "cairo" or  area.lower() == "tanta"  or area.lower() == "alexandria" :
    print (f"{area} is on our list")
else :
    print (f"sorry , {area} is not on our list , thank you")
 
    