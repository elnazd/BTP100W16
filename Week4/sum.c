/*Write a function that takes two integers. Then, the function calculates the sum of the integers and returns the result.*/

#include<stdio.h>
int sum(int a,int b);

int main()
{
	//Calling the function to calculate 10+60
	
	int answer,num1,num2;
	printf("Number 1:");
	scanf("%d",&num1);
	
	printf("Number 2:");
	scanf("%d",&num2);
	
	answer = sum(num1,num2);//pass by value
	printf("The answer is:%d",answer);	
	
}
int sum(int a,int b) 
{
	int result;
	result=a+b;
	
	return result;
	
}
