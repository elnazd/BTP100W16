/*pi=3.14
The area of a circle is given by the formula
area = pi * radius * radius
Write a program to calculate the area of a circle.

step 1: define a variable to hold the area (a definition)
define radius
define pi
step2: area = pi * radius * radius
step 3: display the area to the user
*/
#include<stdio.h>
#define PI 3.14
int main()
{
  float radius,area;
  //Prompting the user
  printf("Please enter the radius:");
  scanf("%f",&radius);
  
  //Calculating the area:
  area = PI * radius * radius;
  
  //Displaying the results:
  printf("The area of the circle is: %.2f\n",area);
  return 0;
  
}
