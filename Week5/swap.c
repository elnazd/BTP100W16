#include <stdio.h> 
void swap(int p, int q); 
int main(void) { 
   int a, b; 
   printf("a is "); 
   scanf("%d", &a); 
   printf("b is "); 
   scanf("%d", &b); 
   printf("\n a is %d\n b is %d\n", a, b);
   swap(&a, &b);  
   printf("\n a is %d\n b is %d\n", a, b); 
   return 0; 
} 
void swap(int *p, int *q) { 
   int c; 
   c = *p; 
   *p = *q; 
   *q = c;
   printf("p is %d\n q is %d\n", *p, *q);  
} 
