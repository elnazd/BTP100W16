/*Write a program to prompt the user to input a number. The program keeps running until the user inputs 0. */
//step1: prompt the user to input a number
//step2: repeat until the user inputs 0

#include<stdio.h>
int main()
{
	int input;
	do{
		//action
		printf("Please input an integer. Press 0 to exit:\n");
		scanf("%d",&input);
	}while(input!=0);
	


	return 0;
}



