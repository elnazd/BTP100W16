//To synchronize user input with program execution buffer should be empty.  Consider the following function, which clears the input buffer of all unread characters. 

 // clear empties the input buffer 
 //
 void clear(void)
 {
         while (getchar() != '\n')
                 ;  // empty statement intentional 
 }