/***************
there is a price for an item 
ask for the user for how much money they have
if they have the price to buy say 'you can afford it'
if they don't say 'Sorry you need this much money more to buy this'
****************/

#include <stdio.h>

int main()
{
    double money;
    double price = 352;
    printf("The price of the item is Rs.352.00\n");
    printf("How much money do you have? ");
    scanf("%lf", &money);

    money > price ? printf("You can be afford\n") : printf("Sorry you need more Rs.%lf to buy this\n", price - money);

    return 0;
}