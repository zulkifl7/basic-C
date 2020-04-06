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

#include <stdio.h>

int main()
{
    int i = 0;
    int max;
    printf("Add a number to generate ur triangle: ");
    scanf("%i",&max);
    getchar();
    while (i <= max) // looping to get 1 -10 and store values on i
    {
        // printf("%i ",i);
        int k = i; // use i as the starting value and decreasing value until getting 0
        while (k >= 0)
        {
            printf("%i ", k);
            k = k - 1;
        }

        i = i + 1;
        printf("\n"); // printing a new line to print every set of values in seperated lines
    }

    // do while

    char answer;
    int m = 0;
    printf("Do you wanna Save? (Y/N): ");
    scanf("%c", &answer);
    getchar();
    do
    {
        if (answer == 'n' || answer == 'N')
        {
            printf("exiting without saving!!\n");
            m = m + 1;
        }
        else if (answer == 'y' || answer == 'Y')
        {
            printf("Saving and exiting!!\n");
            m = m + 1;
        }
        else
        {
            printf("Wrong input!!\n");
            printf("Do you wanna Save? (Y/N): ");
            scanf("%c", &answer);
            getchar();
        }

    } while (m < 1);

    return 0;
}
