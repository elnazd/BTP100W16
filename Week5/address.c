//pointers and addresses
#include<stdio.h>
int main()
{
	int a=10;
	int *b = &a;
	
	
	printf("The value of a is: %d\n",a);
	printf("The address of a is: %x",&a);
	printf("The value of *b is: %d\n",*b);
	
	a=a+1;
	
	printf("The value of a is: %d\n",a);
	printf("The value of *b is: %d\n",*b);
	
	*b = *b + 20;
	printf("The value of a is: %d\n",a);
	printf("The value of *b is: %d\n",*b);


}