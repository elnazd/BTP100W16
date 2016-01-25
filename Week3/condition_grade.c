/*Write a program to check student's grade.
If student’s grade is greater than or equal 80, 
	print “A”
else
	If student’s grade is greater than or equal 70, 
		print “B”
	else
		If student’s grade is greater than or equal 60, 
			print “C”
		else
			If student’s grade is greater than or equal 50, 
				print “D”
			else
				print “F”
*/
#include<stdio.h>
int main()
{
	float grade;
	
	//step1:
	printf("Please enter your grade:");
	scanf("%f",&grade);
	
	if(grade>=80)
		printf("A\n");
	else 
		if(grade>=70)
			printf("B\n");
		else
			if(grade>=60)
				printf("C\n");
			else
				if(grade>=50)
					printf("D\n");
				else
					printf("F\n");
					
	return 0;
	
}
