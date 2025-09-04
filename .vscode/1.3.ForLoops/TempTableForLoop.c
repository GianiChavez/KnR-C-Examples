//=====================================================================
// Last Edited: 9/4/25
// Example: K&R p.16
// Goal: Print Fahrenheit-Celsius Conversion Table in the terminal using For Loops
//=====================================================================

#include <stdio.h>

#define UPPER 300       // Upper F Temp Bound
#define LOWER 0     // Lower F Temp Bound
#define STEP 20      // Step Size for F

int main ()
{
    int F;
    printf("FORWARD TABLE:\n");
    printf("Temp (F)\t Temp (C)\n");

    for ( F = LOWER; F <= UPPER; F = F + STEP)
        printf("%3d\t \t %6.1f\n", F, (5/9.0)*(F-32));
    
    printf("\n REVERSE TABLE:\n");
    printf("Temp (F)\t Temp (C)\n");

    for (F = UPPER; F>=LOWER; F = F - STEP)
         printf("%3d\t \t %6.1f\n", F, (5/9.0)*(F-32));
    
}