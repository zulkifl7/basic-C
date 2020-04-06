/************
options for the data packages on a network company app
getting an input to choose the suitable data pack for them
1. rs.29 option 350mb
2. rs 29 350 SMS
3. special combo pack on rs.49 with 2nd and third packages
***********/
#include <stdio.h>

int main()
{
    // packages available
    printf("Select the suitable package for you.\n");
    printf("1. 350mb any time data for Rs.29\n");
    printf("2. 350 SMS for Rs.29\n");
    printf("3. Activatr both packages for Rs.49 and save Rs.10\n");

    // input
    int selection;
    printf("choose the sitable package for you: ");
    scanf("%i", &selection);

    // algo
    switch (selection)
    {
    case 1: // 350mb
        printf("\nYou have succesfully activated the Rs.29 Package for 350mb anytime data valid for 7 days.\n");
        printf("Charges will be applied on your monthly bill.\n");
        break;
    case 2: // 350SMS
        printf("\nYou have succesfully activated the Rs.29 Package for 350 SMS valid for 7 days.\n");
        printf("Charges will be applied on your monthly bill.\n");
        break;
    case 3: // combo
        printf("\nYou have succesfully activated the Rs.49 Package for 350Mb anytime data and\n");
        printf("350 SMS valid for 10 days.\n");
        printf("Charges will be applied on your monthly bill.\n");
        break;
    default: // all other selections will be an invallid selection
        printf("\nInvallid selection!!!.\n");
        printf("Sorry sir/madam. we cannot proceed.\n");
        break;
    }

    return 0;
}