//guessing game:
/*
write a program to  randomly generate a number.
Then, the user is prompted to guess the number
The program keeps running until the user guesses the number correctly!
The program guides the  user to input the correct number 
*/
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
	int random,guess;
	srand(time(NULL));
	random = rand();
	
	do {
		scanf("%d",&guess);
		if(guess>random)
			printf("too high");
		if(guess < random)
			printf("too low");
	}while(guess != random);
	
	printf("Success!");

}