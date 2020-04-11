#include <stdio.h>
#include <cs50.h>
#include<math.h>

int main(void)
{
	float change; //variable of the change owed
	do
	{
		change = get_float("Change:");
	}
	while(change<0); //repeats until it gets a valid number

	int cents = round(change * 100); //transform the number to an int and rounds it
	int coins = 0; //number of coins needed

	while(cents>0) //loop
	{
		if(cents>=25) //uses first the 0.25 coins
		{
			cents = cents - 25; //takes 25 from the total due
			coins++; //adds 1 coin to the total
		}
		else if (25>cents && cents>=10)
		{
			cents = cents - 10; //takes 10
			coins++; //adds 1 coin to the total
		}
		else if (10>cents && cents>=5)
		{
			cents = cents - 5; //takes 5
			coins++; //adds 1 coin to the total
		}
		else
		{
			cents = cents - 1; //takes 1
			coins++; //adds 1 coin to the total
		}	
	}
	printf("%i\n",coins); //print the total
}