#include <stdio.h>

int main(int argc, char *argv[])
// char *argv[] means An array of memory addresses that point to characters.
//argc is argument count, argc is argument vector thus array of strings
{
    if (argc != 2)
    {
        printf("Missing command line argument.\n");
        return 1;
    }
    printf("Hello, %s\n", argv[1]);
    return 0;
}