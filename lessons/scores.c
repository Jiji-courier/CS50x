#include <stdio.h>
#include <stdlib.h>

const int N = 3;

float average(int length, int array[]);

int main(void)
{
    int scores[N];
    // Getting access to scores
    for (int i = 0; i < N; i++)
    {
        printf("Score %d: ", i+1);
        // so the user sees score 1 not score 0
        if (scanf("%d", &scores[i]) !=1)
        {
            printf("Invalid input. Please enter an integer.\n");
            return 1;
        }
        // The & gives the memory address where the function will store the input value
    }

    printf("Average: %.2f\n", average(N, scores));
    // N = denominator scores = the numbers
}

float average(int length, int array[])
{
    long sum = 0;
    for (int i = 0; i < length; i++)
    {
        sum += array [i];
    }
    return sum / (float) length;
}