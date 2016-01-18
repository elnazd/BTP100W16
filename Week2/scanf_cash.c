/*Write a C program that prompts the user to enter the amount of cash in their pockets, accepts the user's input, and displays the amount in the format shown below.  If the user has entered 4.52, your program displays

How much money do you have in your pockets ? 4.52 
The amount of money in your pockets is $4.52 */

#include<stdio.h>
int main()
{
	//step1: Define cash
	float cash;
	
	//step 2 : prompt the user
	printf("How much money do you have in your pockets ?");
	
	//step 3: read user's input
	scanf("%f",&cash);
	
	//step 4: Display the cash amount 
	printf("The amount of money in your pockets is $%f\n",cash);
	
	return 0;

}
