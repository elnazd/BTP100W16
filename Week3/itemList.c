/*There are 3 items in a store:
Item 1 costs $10.
Item 2 costs $7.
Item 3 costs $12.
Prompt the user to input an item number, display the price for the item to the user.
*/
#include<stdio.h>
int main()
{
	int item;
	//Step1: Prompt the user to input the item number and get the information
	printf("Please input the item number:");
	scanf("%d",&item);
	
	//Step2: Display the price of the item
	switch(item){
	
	case 1://if item is equal to 1
		printf("Item 1 costs $10.");
		break;
	case 2:
		printf("Item 2 costs $7.");
		break;
	case 3:
		printf("Item 3 costs $12.");
		break;
	default:
		printf("Invalid input!Please try again!\n");
	}
		
	/*if(item==1)
		printf("Item 1 costs $10.");
	if(item==2)
		printf("Item 2 costs $7.");
	if(item==3)
		printf("Item 3 costs $12.");
	*/
	return 0;

}