#include <stdio.h>
/*.h means header file, needed to access library*/

int main(void)
{
    char answer[100];
    printf("What's your name? ");
    fgets(answer, 100, stdin);
    /* fgets = File Get String. stdin is short for Standard Input ie. keyboard */
    printf("hello, %s\n", answer);

    return 0;
    /* send an exit status code back to the OS to indicate how the program finished. 0 is success. No need for else statement as this program isn't designed to have failure*/
}

/* Running the code requires(clang)
    1) clang -o hello hello.c
    ie. name the resulting executable file hello. given the source file hello.c
    2) ./hello
    */



/* Running the code requires(cs50)
    1) make hello ie. compiles source code to machine code
    2) ./hello ie. run as the dot means current folder

    Placing a / will make the code escape ie. printing with quotation mark = "hello, \" world\" \n"
    */
