#include<stdio.h>
int main()
{
	int i=100;
	
	for(int i=0;i<2;i++)
	{
		printf("inside loop %d",i);
			
	}
	
	printf("outside loop %d",i);


}
//output
inside loop: 0 1
outside loop: 100