#include <stdio.h>

int main()
{
    // initialization
    int x = 5;
    int *y = &x;
    printf("1. value through x : %i\nvalue through *p(pointer): %i\n\n", x, *y);

    // changing the value through x
    x = 10;
    printf("2. value through x : %i\nvalue through *p(pointer): %i\n\n", x, *y);

    // changing the value throung *y(pointer)
    *y = 15;
    printf("3. value through x : %i\nvalue through *p(pointer): %i\n\n", x, *y);

    // incriment operator
    x++;
    printf("4. value through x : %i\nvalue through *p(pointer): %i\n\n", x, *y);

    // incriment operator through pointer
    // *y++ is wrong cuz incriment operator has the higher presidence than pointer operator
    // so *y++ --> *(y++)
    (*y)++;
    printf("5. value through x : %i\nvalue through *p(pointer): %i\n\n", x, *y);

    return 0;
}
