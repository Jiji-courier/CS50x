#include <stdio.h>

char get_char_standard(long dollars)
{
    char c;
    printf("Here's $%li. Double it and give it to the next person? ", dollars);
        // %i = integers
        // %f = float
    if (scanf(" %c", &c) !=1)
    {
        return '\0';
        // use single quotation mark for characters, double for strings
    }
    return c;    
}
    
int main(void)
{    
    long dollars =1;  
    char choice;

    while (1)
    {
        choice = get_char_standard(dollars);
        if (choice == 'y' || choice == 'Y')
        {
            dollars *=2;
        }
        else if (choice == 'n' || choice == 'N')
        {
            break;
        }
        else
        {
            printf("Invalid choice. Use lowercase or uppercase 'n' or 'y'. Stopping the game.\n");
            break;
        }
    }

    printf("Here's %li.\n", dollars);

    return 0;
}
