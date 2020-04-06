#include <stdio.h>

void arrayPrinter(int arr[], int col)
{
    for (int k = 0; k < 4; k++)
    {
        printf("%i ", arr[k]);
    }
}

int main()
{
    // 2 dimantional array
    int const rows = 3;
    int columns = 4;
    int studentGrades[][4] = {{1, 2, 2, 3}, {3, 4, 5, 5}, {6, 7, 8, 9}}; // initoalization

    for (int i = 0; i < 3; i++)
    {
        arrayPrinter(studentGrades[i], columns);
        printf("\n");
    }

    return 0;
}