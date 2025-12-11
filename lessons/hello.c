#include <stdio.h>
/*.h means header file, needed to access library*/

int main(void)
{
    char answer[100];
    printf("What's your name? ");
    fgets(answer, 100, stdin);
    /* fgets = File Get String. stdin is short for Standard Input ie. keyboard */
    printf("Hello, %s\n", answer);

    return 0;
    /* send an exit status code back to the OS to indicate how the program finished. 0 is success. No need for else statement as this program isn't designed to have failure*/
}

/* Running the code requires(clang)
    1) cd Desktop/CS50x/lessons	
    2. clang -o <program_name> <program_name>.c	
    3) ./<program_name>

    Pushing changes to github
    1) git pull 
    2) git add <program_name>.c
    3) git commit -m "Descriptive message"
    4) git push --> Use Personal Access Token in Notion

    Troubleshooting
    ? fatal: not a git repository ? incorrect folder
    ? Updates were rejected... fetch first ? git pull --rebase
    ? E325: ATTENTION... swap file ? rm .git/.COMMIT_EDITMSG.swp
    ? You are not currently on a branch ? git rebase --continue
    */



/* Running the code requires(cs50)
    1) make hello ie. compiles source code to machine code
    2) ./hello ie. run as the dot means current folder
    !1 ?2: This is Git status information (it means you have 1 file not staged, and 2 files that haven't been tracked yet

    Placing a / will make the code escape ie. printing with quotation mark = "hello, \" world\" \n"
    */
