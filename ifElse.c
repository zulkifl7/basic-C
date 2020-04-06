/********** 
decription for the project shoud be here
***********/

#include <stdio.h>

int main()
{
    // welcome mote
    printf("Welcome to jambooz main page!!1\n\n");

    // declairing the gender for the greating perpose choose between Mr and Ms from
    int gender;
    printf("Select Your gender(1 fro male and 0 for female) :");
    scanf("%i", &gender);

    // algo for different greating for male and female
    if (gender == 1) // for male
    {
        // asking for the user's name
        char name[31];
        printf("Your good name sir: ");
        scanf("%s", name);
        // greating
        printf("\nHello Mr.%s!!\n\n", name);
    }
    else if (gender == 0) // for female
    {
        // asking for the user's name
        char name[31];
        printf("Your good name madam: ");
        scanf("%s", name);
        // greating
        printf("\nHello Ms.%s!!\n\n", name);
    }

    // menue options
    printf("Chose a menu from below.\n");
    printf("option 1 is only for admins.\n");
    printf("option 2 is a specila note from the admin\n");
    printf("options 3 to 6 are our item cetogories.\n\n");
    printf("1. Add a new item\n");
    printf("2. Admin note\n");
    printf("3. Sports item list\n");
    printf("4. Foods menue\n");
    printf("5. Grocery Item list\n");
    printf("6. Electrical item list\n");

    int selection;
    printf("Your selection: ");
    scanf("%i", &selection);

    // logic for get into the menues
    if (selection == 1) // ner item
    {
        printf("Sorry sir!!\n");
        printf("You are not an admin so You are not allowed to do this action.\n");
    }
    else if (selection == 2) // admin note
    {
        printf("Here is a specila note from the admin to all users\n");
    }
    else if (selection == 3) // sports item
    {
        printf("You are the sports item cetogory now.\n");
    }
    else if (selection == 4) //food item
    {
        printf("You are on the food item cetogory now.\n");
        printf("We provide clean and healthy food with non of any kind of artificail ingrediance.\n");
    }
    else if (selection == 5) // grocery item
    {
        printf("You are now on the grocery item list page");
    }
    else if (selection == 6) // electrical item
    {
        printf("You are now on the electrical item list page");
    }
    else //invalid selection
    {
        if (gender == 1) // for male
        {
            printf("Sorry sir!! Invalid selection\n");
        }
        else if (gender == 0) // for female
        {
            printf("Sorry madam!! Invalid selection\n");
        }
    }

    return 0;
}