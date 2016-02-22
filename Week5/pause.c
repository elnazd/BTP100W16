//To pause execution at a selected point in a program, consider the following function

 // pause execution
 //
 void pause_(void)
 {
         printf("Press enter to continue ...");
         while (getchar() != '\n')
                 ;  // empty statement intentional 
 }