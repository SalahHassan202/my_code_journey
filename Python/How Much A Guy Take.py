# How Much A Guy Take?.....

str_length = input("please , Type The Leangth : \n")
str_width = input("please , Type The width : \n")
str_price = input("How Much For 1 Meter ? :")

# convert the type....
length = float(str_length)
width = float(str_width)
price = float(str_price)


area = length * width        # int 
total_price = area * price         # int 
str_area = str(area)
str_total_price= str(total_price)

print("The Total area is : "+ str_area)


print ("Give The Gay : $" + str_total_price)
