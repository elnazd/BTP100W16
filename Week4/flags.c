/*Write a program to input 100 integers from the user. 
The user must input ‘0’ to exit.
*/
#include<stdio.h>
int main()
{
	int input;
	int counter=0;
	do{
		//action
		printf("Please input an integer. Press 0 to exit:\n");
		scanf("%d",&input);
		counter++;
	}while(input!=0 && counter<100);

	return 0;
}



