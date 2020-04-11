#import math

change = float(input("Change:")) #variable of the change owed
while(change<0):
	change = float(input("Change:")) #Get it until is a valid number 

cents = int(round(change * 100)) #transform the number to an int and rounds it
coins = 0 #number of coins needed

while(cents>0):
	if (cents>=25): #uses first the 0.25 coins
		cents = cents - 25 #takes 25 from the total due
		coins+=1 #adds 1 coin to the total

	elif(25>cents>=10):
		cents = cents - 10 #takes 10
		coins+=1 #adds 1 coin to the total

	elif(10>cents>=5):
		cents = cents - 5 #takes 5
		coins+=1 #adds 1 coin to the total

	else:
		cents = cents - 1 #takes 1
		coins+=1 #adds 1 coin to the total

print(coins)