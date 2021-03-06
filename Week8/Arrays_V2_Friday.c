#include<stdio.h>
void display(const int grade[],const int size);
void report(const int grades[],const int numbers[],const int size);
void search(int grades[],int size);
int find_index(int sNumber, int numbers[],int size);

int main()
{
	const int SIZE=5;
	//define an array of size 10 to represent students' grades
	int grades[SIZE];
	int numbers[SIZE];
	
	//Write a program to prompt 10 students to enter their grades. 
	//Save the grades in the array.
	//traverse the array linearly and scanf the elements
	for(int i=0;i<SIZE;i++){
		printf("Grade for student %d:",i);
		scanf("%d",&grades[i]);
	}
	
	//prompt the students to input their numbersL
	for(int i=0;i<SIZE;i++){
		printf("Student number for student %d:",i);
		scanf("%d",&numbers[i]);
	}
	
	//calling the display function
	//Pass the array
	display(grades,SIZE);
	report(grades,numbers,SIZE);
    
    return 0;
		
}

//Write a function to display all of the elements of grade.
void display(const int grade[],const int size)
{
	//traverse the array linearly and display the elements
	for(int i=0;i<size;i++)
		printf("%d\n",grade[i]);
}

//	Write a function to find the students whose grades are 10. 
void search(int grade[],int size)
{
	for(int i=0;i<size;i++)
	{
		if(grade[i] == 10)
			printf("The index for the student is: %d\n",i);	
	}
}

//write a function to report students' grades in an informative way
//This function displays student numbers with their corresponding grade
void report(const int grade[],const int numbers[],const int size)
{
	for(int i=0;i<size;i++)
		printf("Student %d got %d in the exam.\n",numbers[i],grade[i]);
}


/*
Write a function that receives the following two arguments:
An integer value, representing a student number.
The arrays number.
 The function searches through the number array to find the given student number.
If the student number is found, the function returns the index of the student number
If the student number is not found, the function returns -1.
*/

//Stop the loop once you find a match

int find_index(int sNumber, int numbers[],int size)
{
	int index=-1;//The match is not found, return -1
	int found =0;//no match is found
	
	for(int i=0;i<size && found==0;i++)
	{
		if(numbers[i]==sNumber)
		{
			index = i;
			found = 1;//Match is found
		}
		
	}
	
	
	return index;
	
}




























	
