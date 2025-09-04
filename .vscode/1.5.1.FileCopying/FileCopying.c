//=====================================================================
// Last Edited: 9/4/25
// Example: K&R p.18-19
// Goal: Copy character inputs. Print the value of EOF.
//=====================================================================

#include <stdio.h>

int main()
{
    int c, d;

    while ((c = getchar()) != EOF)
        putchar(c);
    
    printf("\n Value of EOF: %d\n", EOF);
}