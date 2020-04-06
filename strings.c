#include <stdio.h>

int main()
{
    char name[50];
    printf("Enter Your name: ");
    scanf("%49s", name);
    int i = 0;
    while (name[i] != '\0')
    {
        i = i +1;
    }
    printf("these name hase %i elements.\n", i);

    printf("%s\n", name);

    return 0;
}