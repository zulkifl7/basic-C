#include <stdio.h>

int main()
{
    // one dimentional array
    int grades[5] = {1, 2, 3, 4, 5}; // initialization

    printf("2nd Eliment of grades(index no 1 is):\n");
    printf("%i\n", grades[1]); // indexing

    printf("The array grades is:\n");
    for (int m = 0; m < 5; m++)
    {
        printf("%i ", grades[m]);
    }
    printf("\n");

    // 2 dimantional array
    int const rows = 3;
    int const columns = 4;
    int studentGrades[][4] = {{1, 2, 2, 3}, {3, 4, 5, 5}, {6, 7, 8, 9}}; // initoalization

    printf("Eliment on 2nd row and 1st collumn (index no 1,0 is):\n");
    printf("%i\n", studentGrades[1][0]); //indexing

    printf("The 2d array studentGrades is:\n");
    for (int i = 0; i < 3; i++)
    {
        for (int k = 0; k < 4; k++)
        {
            printf("%i ", studentGrades[i][k]);
        }
        printf("\n");
    }

    return 0;
}