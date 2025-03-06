# calculator....
num1 = float(input("enter a number "))
operator =input()
num2 = float(input("enter a number "))
if operator == "+":
    print(num1+num2)
elif operator == "-":
    print(num1-num2)    
elif operator == "*":
    print(num1*num2)    
elif operator == "/":
    print(num1/num2)    
elif operator == "^":
    print(num1**num2)    
else:
    print("error ")


