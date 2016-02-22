The following program outputs the same set of 10 pseudo-random integers between 6 and 100 inclusive:

 #include <stdlib.h>
 #include <stdio.h>

 int main(void)
 {
         int i, n, a = 6, b = 100;

         for (i = 0; i < 10 ; i++) {
                 n = a + rand() % (b + 1 - a);
                 printf("Random number %d is %d\n", i+1, n); 
         }
         return 0;
 }