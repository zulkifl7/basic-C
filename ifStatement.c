/**********
firs taking an input for gender 
print a note seperatedly for both genders
ask for the age
great them or print a statment acording to there age
*************/

#include <stdio.h>

int main()
{
    // declairing a variable fro gender
    int gender;
    printf("Enter your gender here (1 for male 0 for female): ");
    scanf("%i", &gender); // user input for gender

    // algo for female
    if (gender == 0)
    {
        int age; // declaration of variable age
        printf("Looks like a girl!!!!\nHow old are you? ");
        scanf("%d", &age); // user input for age

        if (age > 24) // if the age of female is greater than 24
        {
            printf("Ohh...!! you are a Women\n");
        }
        else if (24 >= age > 3) // if the age of female is greater than 3 and less than or equal 24
        {
            printf("Yeah!! girl.\n");
        }
        else // for the age less than 3 or negative numbers
        {
            printf("Sorry may may not allowed people from your age are not alloweed for the app or wrong formate for age.\n");
        }
    }
    else if (gender == 1) // algo for male
    {
        int age; // declaration of variable age
        printf("Looks like a boy!!!!\nHow old are you? ");
        scanf("%d", &age); // user input for age

        if (age > 24) // if the age of male is greater than 24
        {
            printf("Ohh...!! you are a Man\nHello gantlmen!!\n");
        }
        else if (24 >= age > 3) // if the age of the male geateer than 3 and less than or equal 24
        {
            printf("Yeah!! I'm correct you are a Boy.\n");
        }
        else // for the age less than 3 or negative numbers
        {
            printf("Sorry may may not allowed people from your age are not alloweed for the app or wrong formate for age.\n");
        }
    }

    return 0;
}

// char gender[26];
// printf("enter your gender here : ");
// scanf("%s", &gender);
