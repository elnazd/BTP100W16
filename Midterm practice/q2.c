/*
The following code snippet prompts the user to input 100 numbers. Add necessary statements to terminate the iteration when the input number is 0. Note that you are NOT allowed to use a break or exit or return statement. Hint: Use control structure statements, for example &&, ||, or !.
*/
int i, number;
//solution 1
for (i = 0; i < 100 && number!=0; i++) 
{
     printf(“Please enter a number:”);
	scanf(“%d”,&number);

}
//solution 2
int i, number;

for (i = 0; i < 100 ; i++) 
{
     printf(“Please enter a number:”);
	scanf(“%d”,&number);
	if(number==0)
		i=100;
}