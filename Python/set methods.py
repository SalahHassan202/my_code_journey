#set methods......
a={1,2,3}
b={4,5,6}
#print(a|b)   # union
print(a.union(b))
a.add(4)
print(a)
a.add(5)
a.add(6)
print(a)
a.remove(2)
#a.remove(9)   # error
a.discard(15)  # like a remove but it don't give type error
print(a) 
a.clear()
print(a)