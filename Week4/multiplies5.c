/*Write a program to print all positive numbers from 0 to 100 on the screen. The numbers must be divisible by 5;
0
5
10
15
…
100
*/
#include<stdio.h>
int main()
{
	
	for(int counter=0;counter<=100;counter+=5)
	{
	//action
		printf("%d\n",counter);	
	}
	return 0;
}