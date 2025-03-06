# dictionary.....
info={
    "name" : "salah" , 
    "age" : 21 ,
    "country" : "egypt"

}

print(info)
print(info["name"])
print(info["age"])
print(info["country"])
##############################################
print(info.get("age"))                  # 21
print(info.get("id"))                   # None
print(info.get("id" ,"Not Found"))      # Not Found
