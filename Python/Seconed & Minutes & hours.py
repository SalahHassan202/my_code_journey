# Seconed & Minutes & hours.....

# 1 minute = 60 second  ,,,  1 hour = 60 minute = 60 * 60 second = 3600 second

int_seconds = int(input("Please , Enter The Duration In Seconds : \n"))

int_hours = int_seconds // 3600 
int_minutes = (int_seconds % 3600) // 60
remaining_secondes = int_seconds % 60

print("The duration is : " + str(int_hours) + " Hours , " + str(int_minutes) + " Minutes" + " , and " + str(remaining_secondes) + " Seconds .")
