#include <cs50.h>
#include <stdio.h>

int main(void)
{
    string answer = get_string("What is your name? ");
    printf("hello, %s\n", answer);
}

/*To organise:
rm name
rm: remove regular file 'name'? y
mkdir name
mv name.c name

To change directory:
cd name

To rename:
mv name.c old.c
*/
