#include<stdio.h>

int main()
{
    //Declaration
    char first, middle, last;
    int quarters, dimes, nickels;
    int pennies, quarterSum, dimeSum;
    int nickelSum, totalPennies, dollars, cents;

    //Data/input
    printf("Enter your initials, first, middle and last: ");
    scanf("%c%c%c", &first, &middle, &last);

    printf("\nHello %c.%c.%c., let's see what your coins are worth.", first, middle, last);

    printf("\nEnter number of quarters: ");
    scanf("%d", &quarters);
    printf("Enter number of dimes: ");
    scanf("%d", &dimes);
    printf("Enter number of nickels: ");
    scanf("%d", &nickels);
    printf("Enter number of pennies: ");
    scanf("%d", &pennies);

    printf("\nNumber of quarters is: %d.", quarters);
    printf("\nNumber of dimes is: %d.", dimes);
    printf("\nNumber of nickels is: %d.", nickels);
    printf("\nNumber of pennies is: %d.", pennies);

    //Processing/calculations
    quarterSum = quarters * 25;
    dimeSum = dimes * 10;
    nickelSum = nickels * 5;

    totalPennies = quarterSum + dimeSum + nickelSum;
    dollars = totalPennies/100;
    cents = totalPennies%100;

    //output
    printf("\n \nYour coins are worth %d dollars and %d cents.", dollars, cents);

    return 0;
}

//Test Run 1
//Enter your initials, first, middle and last: JTK

//Hello J.T.K., let's see what your coins are worth.
//Enter number of quarters: 4
//Enter number of dimes: 0
//Enter number of nickels: 0
//Enter number of pennies: 0

//Number of quarters is: 4.
//Number of dimes is: 0.
//Number of nickels is: 0.
//Number of pennies is: 0.

//Your coins are worth 1 dollars and 0 cents.




//Test Run 2
//Enter your initials, first, middle and last: RHT

//Hello R.H.T., let's see what your coins are worth.
//Enter number of quarters: 0
//Enter number of dimes: 10
//Enter number of nickels: 0
//Enter number of pennies: 0

//Number of quarters is: 0.
//Number of dimes is: 10.
//Number of nickels is: 0.
//Number of pennies is: 0.

//Your coins are worth 1 dollars and 0 cents.




//Test Run 3
//Enter your initials, first, middle and last: JTN

//Hello J.T.N., let's see what your coins are worth.
//Enter number of quarters: 10
//Enter number of dimes: 4
//Enter number of nickels: 9
//Enter number of pennies: 1

//Number of quarters is: 10.
//Number of dimes is: 4.
//Number of nickels is: 9.
//Number of pennies is: 1.

//Your coins are worth 3 dollars and 35 cents.




//Test Run 4
//Enter your initials, first, middle and last: HUH

//Hello H.U.H., let's see what your coins are worth.
//Enter number of quarters: 2
//Enter number of dimes: 5
//Enter number of nickels: 7
//Enter number of pennies: 0

//Number of quarters is: 2.
//Number of dimes is: 5.
//Number of nickels is: 7.
//Number of pennies is: 0.

//Your coins are worth 1 dollars and 35 cents.




//Test Run 5
//Enter your initials, first, middle and last: CLP

//Hello C.L.P., let's see what your coins are worth.
//Enter number of quarters: 16
//Enter number of dimes: 16
//Enter number of nickels: 16
//Enter number of pennies: 16

//Number of quarters is: 16.
//Number of dimes is: 16.
//Number of nickels is: 16.
//Number of pennies is: 16.

//Your coins are worth 6 dollars and 40 cents.
