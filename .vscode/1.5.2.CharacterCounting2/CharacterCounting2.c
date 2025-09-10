//=====================================================================
// Last Edited: 9/10/25
// Example: K&R p.20
// Goal: Count the number of characters.
//=====================================================================
// NOTE: An EOF must be manually sent by pressing CTRL+Z on a new terminal line.

// I have not modified this code to avoid counting Newline characters. I tried using "EOF || '\n'" as the end condition
// of the for loop, but this didn't work. You can just use \n as the end condition, and it works well with the terminal,
// but would not function for a longer file.

#include <stdio.h>

int main() 
{
    double nc;      // DOUBLE is a double precision float (decimal)

    for (nc = 0; getchar() != EOF; ++nc)    
        ;                                   // Indicates a void line; nothing is done during the loop.

    /* Interesting. Most For Loops I've used only modify the same var. But this one
    uses a completely different method for the end condition. getchar has nothing to do with nc. */
    
    printf("Number of Chars: %.0f\n", nc);           // %f is for floats. ".0" eliminates the decimal part of the float.
}