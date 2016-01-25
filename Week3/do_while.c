/*Write a program to print  1000 stars onto the display.*/
//do...while
#include<stdio.h>
int main()
{
	//Step1: Initialize the counter
	int counter=0;
	do
	//action
	{
		printf("*");
		counter++; //increment the counter by 1. (counter=counter+1)
	}while(counter<1000);
	
	return 0;

}
