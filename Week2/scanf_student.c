//Write a program to prompt a student to input their student id
//Display the student id:
#include<stdio.h>
int main()
{
	//step1: Define student id
	int student_id;
	//step 2 : prompt the user
	printf("Please input your student id:");
	
	//step 3: read user's input
	scanf("%d",&student_id);
	
	//step 4: Display the student id:
	printf("Your student id is %d",student_id);


	return 0;
}
