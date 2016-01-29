/*A muffin shop charges 60 cents per muffin.  This program
will ask the user to enter the number of muffins they wish 
to buy.  It will then calculate the cost of the muffins and
the applicable taxes and print out the result.

less than 6 muffins is considered to be a luxury and taxable
6 or more muffins is considered to be groceries and not taxable.
*/

/*Step1: Prompt the user to input the number of muffins they want to buy.
Step2:Input user's information
Step3:Calculate the total cost
		If the number of muffins is less than 6, consider 13% HST.
		Else no taxes.
*/
#include<stdio.h>
#define PRICE 0.60
#define HST 0.13
int main()
{
	int muffins; //Number of muffins
	float total;
	//Step1&2:
	printf("Please input the number of muffins you want to buy");
	scanf("%d",&muffins);
	//Step3:
	if(muffins<6)
		total = muffins*PRICE + muffins*PRICE*HST;
	else
		total = muffins*PRICE;	

	printf("The total cost is:%.2f\n",total); 

	return 0;
}








