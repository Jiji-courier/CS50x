#include <stdio.h>

int main(int argc, char *argv[])
// char *argv[] means An array of memory addresses that point to characters.
//argc is argument count, argc is argument vector thus array of strings
{
    if (argc == 2)
    {
        printf("Hello, %s\n", argv[1]);
    }
    else 
    {
        printf("Hello, world\n");
    }
}