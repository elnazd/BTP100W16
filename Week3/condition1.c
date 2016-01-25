/*Write a program to check student's grade.
If student’s grade is greater than 50 AND the final project is greater than 50, print “pass”, print "Well done!"
else print "fail".

step1: prompt the student to input their grade.
step2: check if the grade is greater than 50 and print a massage.
*/

#include<stdio.h>
int main()
{
	float grade,final_project;
	
	//step1:
	printf("Please enter your grade:");
	scanf("%f",&grade);
	printf("Please enter your final project grade:");
	scanf("%f",&final_project);
	
	//step 2: Condition
	if(grade >= 50 && final_project>=50){
		printf("Pass!\n");
		printf("Well done!\n");
		}
	else
		printf("Fail!\n");
		
		
	return 0;
}



