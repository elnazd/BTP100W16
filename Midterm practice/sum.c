/*
Write a program that calculates and prints the sum of even integers between 2 and 100. An integer is even, if it is divisible by 2. For example, 4 is even because it is divisible by 2, but 5 is not even since it’s not divisible by 2.
*/
#include<stdio.h>
int main()
{
	int sum=0;
	for(int i=0;i<101;i++)
	{
		if(i%2 == 0)
			sum = sum + i;
			
	}
	
	printf("The sum is:%d\n",sum);
	

}


//solution2:
#include<stdio.h>
int main()
{
	int sum=0;
	for(int i=0;i<101;i+=2)
	{
		sum = sum + i;
			
	}
	printf("The sum is:%d\n",sum);

}