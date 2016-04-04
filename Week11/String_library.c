#include<stdio.h>
#include<string.h>
//Assume full-names are not longer than 30 characters
#define SIZE 31 //30+1

int main()
{
	char name[SIZE]; //source
	char backup[SIZE];//destination 
	//prompt the user to input name
	printf("Please input your full name:");
	scanf("%30[^\n]",name);//Harry Potter
	
	//length of the string
	//strlen
	int len;//represents the length of the string
	len = strlen(name);
	printf("The length of the string is:%d\n",len);
	
	//Copying
    printf("Copying the string to backup...\n");

	strcpy(backup,name);
	//testing
	printf("Backup string: %s\n",backup);
	

	
	//To compare if two strings are equal
    printf("Comparing if two strings are equal...\n");

	if(strcmp(backup,name)==0) //if(!strcmp(backup,name))
		printf("The strings are equal!\n");
	else 
		printf("The strings are not equal!\n");
	
	return 0;
}
