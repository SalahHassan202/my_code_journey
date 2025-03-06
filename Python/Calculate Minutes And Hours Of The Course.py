# calculate minutes and hours of the course.....

total_minutes = input("Please , Enter The Number Of Minutes : \n")        # string 
int_minutes = int(total_minutes)          # int 
hours = int_minutes // 60                 # floor division 
minutes = int_minutes % 60
print("This Course Is : " + str(hours) +" Hours And " + str(minutes) +" Minutes Long" ) 

# 321 minutes ====>         321 // 60 == 5  ;;;   321 % 60 == 21 
# This Course Is : 5 Hours And 21 Minutes Long

