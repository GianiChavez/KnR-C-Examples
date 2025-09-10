//=====================================================================
// Last Edited: 9/10/25
// Example: K&R p.19-20
// Goal: Count the number of characters.
//=====================================================================
// NOTE: An EOF must be manually sent by pressing CTRL+Z. The code has also been modified to avoid counting newline characters, which
// make the count appear as 1 more than it should be. This is because a newline is automatically included when you send an input via
// the terminal.

#include <stdio.h>

int main() 
{
    long nc;    //LONG is an integer with a min. val. of 32 bits. Normal INTs vary, and are either 16 or 32 bits. Depends on system.
    int c;

    nc = 0;     // Init nc to zero

    while ((c = getchar()) != EOF) {
        if (c != '\n')
            ++nc;       // Increments the value of NC. There is a distinction between ++nc and nc++, but we haven't learned it yet
    }
    
    printf("No. of Characters: %ld\n", nc); // %ld indicates that the replaced value is a LONG integer.
}                                           // What are all the possible args for a printf command? Will need to check documentation 