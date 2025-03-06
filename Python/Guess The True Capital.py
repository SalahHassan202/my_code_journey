# Guess The True Capital ...

secret_answer ="cairo"
answer=""
count =0 
limit =3 
lose = False
while answer != secret_answer and not lose:
    if count<limit:
        answer=input("what is capital of egypt?")
        count+=1
    else:
        lose = True 

if lose == True :
    print("You Lose")
else:
    print("You Win ")

                  

