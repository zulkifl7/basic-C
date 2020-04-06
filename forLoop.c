#include <stdio.h>

int main()
{

    // printing the numbers 0 -9
    int k;
    for (k = 0; k < 10; k++)
    {
        printf("%i\n", k);
    }

    // looping until user say yes to exit the programe
    char i;
    printf("do you wanna exit? (Y/N): ");
    scanf("%c", &i); // initializing the variable befour the loop
    getchar();

    for (; i != 'y';)
    {
        printf("You selected no\n");
        printf("do you wanna exit? (Y/N): ");
        scanf("%c", &i); // updating the value inside the loop
        getchar();
    }

    /*** TASK 
    * the output should be like this
    0 
    1 0 
    2 1 0 
    3 2 1 0 
    4 3 2 1 0 
    5 4 3 2 1 0 
    6 5 4 3 2 1 0 
    7 6 5 4 3 2 1 0 
    8 7 6 5 4 3 2 1 0 
    9 8 7 6 5 4 3 2 1 0 
    10 9 8 7 6 5 4 3 2 1 0 
    *******/

    int max;
    int j;
    j = 0;
    for (; j <= 10; j = j + 1) // looping to get 1 -10 and store values on j
    {
        max = j;
        for (; max >= 0;) // use j as the starting value and decreasing value until getting 0
        {
            printf("%i ", max);
            max = max - 1;
        }
        printf("\n"); // printing a new line to print every set of values in seperated lines
    }

    return 0;
}