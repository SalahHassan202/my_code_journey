#set......
mySet={"ahmed", "hassan", "ali","salah","gamal"}
# error
# mySet={"ahmed", "hassan",{1;2,3;4,5;6} "ali","salah","gamal"}      
# mySet={"ahmed", "hassan",[2,3,'salah'] , "ali","salah","gamal"}
#true (not make error)
#mySet={"ahmed", "hassan", (1,2,3,4,5,6),"ali","salah","gamal"}
print(mySet)
#error
#print(mySet[2])
#print(mySet[0:4])