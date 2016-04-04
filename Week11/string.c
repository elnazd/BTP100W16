#include<stdio.h>
//Assume full-names are not longer than 30 characters
#define SIZE 31 //30+1
int length(const char a[]);
void display(const char a[]);
void copy(char backup[],const char input[]);

int main()
{
	char name[SIZE];
	char backup[SIZE];
	//prompt the user to input name
	printf("Please input your full name:");
	scanf("%30[^\n]",name);//Harry Potter

	//String output
	printf("%-5s\n",name);
	
	puts(name);
	
	
	display(name);

	//calling length
	printf("\nThe length of the name is:%d\n",length(name));

	//Calling copy
	copy(backup,name);

	return 0;
}

void display(const char a[])
{
//display the string
	int i;
	for(i=0; a[i]!='\0'; i++)
		printf("%c",a[i]);

}
//This function takes a string as input
//This function, counts the number of characters in the string.
//This function returns the length of the string

int length(const char a[])
{
	int i,len=0;//Represents the length of the string
	for(i=0; a[i]!='\0'; i++)
		len++;

	return len;
}

//This function takes the addresses of two strings as input
//This function, copies input[] to backup[].
void copy(char backup[],const char input[])
{
	int i=0;
	for(i=0; input[i]!='\0';i++)
		backup[i]=input[i];

	backup[i]='\0';
	//testing
	display(backup); //Harry Potterjkhfjkhkjh
}
