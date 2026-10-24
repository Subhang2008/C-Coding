#include <stdio.h>

/*
Function prototype = Provide the compiler with information about a function's 
                     name, return type, and parameters before its actual definition.
                     It enables type checking and allows functions to be used before
                     they are defined.
                     This improves readability, organization and helps prevent errors.
                     

MY EXPLANATION = Basically, it is like declaring a function before writing its code
it can allow us to declare a function and then use it in the main function and then
write the codes for the functions below the main function.

If we would use the functions in main without using function prototype and write the codes
for the functions below the main function, there would be an error because the main function
will not be able to recognize functions below it as C executees from top to bottom


*/