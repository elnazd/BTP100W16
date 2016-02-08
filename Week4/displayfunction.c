/*Write a function to print positive integers from 1 to 100. Call the function from the main function!*/

#include<stdio.h>
void display_numbers();
int main()
{
	//Calling the function
	display_numbers();		
	return 0;
}
//function 2
//return value: This function returns nothing
//What the function does: This function prints positive integers from 1 to 100
//Arguments: Nothing
void display_numbers()
{
	for(int i=0;i<100;i++)
		printf("%d\n",i);
}


