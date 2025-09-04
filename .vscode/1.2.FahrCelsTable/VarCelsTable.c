//=====================================================================
// Last Edited: 9/4/25
// Example: K&R p.12
// Goal: Print Fahrenheit-Celsius Conversion Table in the terminal
//=====================================================================

#include <stdio.h>

int main()
{
    float F, C;                         // Define Vars
    float lower, upper, step;     

    lower = 0;                          // Define lower, upper, & step bounds
    upper = 300;
    step = 20;

    printf("Temp (F)\tTemp (C)\n");         // Print Header. \t is a tab. \n is newline.
    F = lower;                              // Initialize F to lower bound
    
    while (F <= upper) {        
        C = (5.0/9.0) * (F-32.0);           // Calculation for C
        printf("%3.0f\t \t%6.1f\n", F, C);  // Print Table. %d is a placeholder for an int arguments
        F = F + step;                       // The number inside %d is the width of the line and forces a right-justify
                                            // In the 2nd version, we replace with %f to signify a float. Each digit
    }                                       // indicates precision on either side of the decimal point.
                                    
}
