//=====================================================================
// Last Edited: 9/10/25
// Example: K&R p.20-21
// Goal: Count the number of lines.
//=====================================================================
// NOTE: An EOF must be manually sent by pressing CTRL+Z on a new terminal line.
// EX. 1-8: "Write a program to count blanks, tabs, and newlines."
// EX. 1-9: "Write a program to copy its input to its output, replacing each string of one or more blanks by a single blank.""
// EX. 1-10: "Write a program to copy its input to its output, replacing each tab by \t, each backspace by
//             \b, and each backslash by \\."

// WORKING: \n, \t, ' ' replacements & counts
// Haven't implemented backslashes or backspaces. Don't know how to write backslashes in code but will figure out later.
// Probably will attempt backspaces but I'm not sure how to test it in the terminal. Will do more research

#include <stdio.h>

int main ()
{
    int c, nl, tabs, blanks, BlankCount;

    nl = 0;
    tabs = 0;
    blanks = 0;
    BlankCount = 0;

    while ((c = getchar()) != EOF)
    {
        if (c == '\n')  // Learned about CHARACTER CONSTANTs: just an int with a letter symbol. '\n' is a single character constant with val = 10.  
        {
            ++nl;
            printf("\\n\n");
        }
        
        if (c == '\t')
        {
            ++tabs;
            printf("\\t");
        }

        if (c == ' ')
        {
            ++BlankCount;
            ++blanks;
        }

        if (c != '\t' && c != ' ' && c != '\n' && c != '\\')
        {
            if (BlankCount >= 1)
            {
                printf(" ");
                BlankCount = 0;
            }
            
            putchar(c);
        }
    }

    printf("No. of Newlines: %d\n", nl);
    printf("No. of Tabs: %d\n", tabs);
    printf("No. of Blanks: %d\n", blanks);
}

