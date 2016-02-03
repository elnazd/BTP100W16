/*Write a program to print all positive even numbers from 0 to 100 on the screen:
0
2
4
6
…
100
*/
#include<stdio.h>
int main()
{
	
	for(int counter=0;counter<=100;counter+=2)
	{
	//action
		printf("%d\n",counter);	
	}
	return 0;
}