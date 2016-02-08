#include <stdio.h>   
void modify(int*);

int main() { 
	int i=10;   
	printf("i= %d",i);   
	modify(&i);//pass by address
	printf("i= %d",i);   
	return 0; 
}
void modify(int  *i){
	 *i = (*i) *1000;
	printf("inside modify: i= %d",*i);  
}
