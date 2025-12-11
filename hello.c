#include <cs50.h>
#include <stdio.h>
/*.h means header file, needed to access library*/
int main(void)
{
    //printf("hello, \"world\" \n");//
/*semicolons are the equivalent of full stops*/
    string answer = get_string("What's your name? ");
    printf("hello, %s\n", answer);
}

/* Running the code requires
    1) make hello ie. compiles source code to machine code
    2) ./hello ie. run as the dot means current folder

    Placing a / will make the code escape ie. printing with quotation mark = "hello, \" world\" \n"
    */
