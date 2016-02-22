#include<stdio.h>
double feetToMeter(double feet);
double meterToFeet(double meter);

/*
double feetToMeter(double feet); 
This function receives a measure in Feet, converts it to Meter, and returns the converted value. The function uses the following formula for conversion: 
Meter= feet/3.28
Please write your code in the space provided below:
*/
double feetToMeter(double feet) 
{
	int meter;
	meter= feet/3.28;
	return meter;
}
/*
double meterToFeet(double meter);
This function receives a measure in Meter, converts it to Feet, and returns the converted value. The function uses the following formula for conversion: 
Feet=meter * 3.28
Please write your code in the space provided below:
*/
double meterToFeet(double meter)
{

	int feet;
	feet=meter*3.28;
	return feet;
}
/*
Write the main function to declare required variables and to ask the user which conversion he would like to do. The user should enter 1) for Feet to Meter conversion or 2) for Meter to Feet conversion. Check the user's choice and then call the appropriate function. 
The called functions return the calculated result to the main function. Your main function saves the return values and print them in two decimal places.
A sample run is given below.
Sample Run:
** Measure Conversion **
Enter  1) for Feet to Meter conversion
Enter  2) for Meter to Feet conversion
1
Enter a measure in Feet:5.6
Measure in Meter:1.70

Please write your code in the space provided below:
*/
int main()
{

/*
Write the main function to declare required variables and to ask the user which conversion he would like to do. The user should enter 1) for Feet to Meter conversion or 2) for Meter to Feet conversion. Check the user's choice and then call the appropriate function. 
*/
	double feet,meter,result;
	int option;
	printf("The user should enter 1) for Feet to Meter conversion or 2) for Meter to Feet conversion.\n");
	scanf("%d",&option);
	
	switch(option){
	case 1:
		printf("Enter a measure in Feet:");
		scanf("%lf",&feet);
		result = feetToMeter(feet);
		printf("Measure in Meter:%.2lf\n",result);
		break;
	case 2:
		printf("Enter a measure in meter");
		scanf("%lf",&meter);
		result =  meterToFeet(meter);
		printf("Measure in feet:%.2lf\n",result);
		break;
	default:
		printf("Invalid input!");
		
	}

}
	

