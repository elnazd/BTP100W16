/*Write a C program to prompt the user to select between two options ‘a’ or ‘b’. If option ‘a’ is selected, display “Program 1 is running!”. If option ‘b’ is selected, display “Program 2 is running!”. Here is a sample output:

Which option will you choose: a
Program 1 is running!
*/
#include<stdio.h>
int main()
{
	char option;
	//prompting the user:
	printf("Please select between two options a or b");
	scanf("%c",&option);
	switch(option)
	{
	case 'a':
		printf("Program 1 is running\n");
		break;
	case 'A':
		printf("Program 1 is running\n");
		break;
	case 'b':
		printf("Program 2 is running\n");
		break;
	default:
		printf("Invalid input! Try again!");	
	}
	
	
	
	
	
	
	
	


	return 0;
}