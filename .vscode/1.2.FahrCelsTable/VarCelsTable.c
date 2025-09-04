//=====================================================================
// Last Edited: 9/4/25
// Example: K&R p.12
// Goal: Print Fahrenheit-Celsius Conversion Table in the terminal
//=====================================================================

#include <stdio.h>

int main()
{
    int F, C;                   // Define Vars
    int lower, upper, step;     

    lower = 0;                  // Define lower, upper, & step bounds
    upper = 300;
    step = 20;

    F = lower;                  // Initialize F to lower bound
    while (F <= lower) {        
        C = 5 * (F-32) / 9;         // Calculation for C
        printf("%d\t%d\n", F, C);   // Print Table. %d is a placeholder for an int arguments
    }
}
