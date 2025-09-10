//=====================================================================
// Last Edited: 9/4/25
// Example: K&R p.18-19
// Goal: Copy character inputs. Print the value of EOF.
//=====================================================================

#include <stdio.h>

int main()
{
    int c;

    while ((c = getchar()) != EOF)
        putchar(c);

}