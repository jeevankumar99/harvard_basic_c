//to check whether a card is valid or not and to find out which one it is
#include<stdio.h>
#include<cs50.h>
#include<math.h>

int main(void)
{
    long Cnum;
    int x, y, sum = 0, a, b;
    int prod, sum2 = 0, sumFin = 0;
    do
    {
        Cnum = get_long("Number: ");
    }
    while (Cnum < 99999 || Cnum > 9999999999999999); // to make sure the user enters a valid card number
    long temp = Cnum;
    long Cnum2 = Cnum; // stores user entered value to check card type later

    while (Cnum > 0)
    {
        Cnum /= 10; //to remove the last digit
        x = Cnum % 10;
        prod = 2 * x;
        if (prod > 9)  // to add the product digits of the left out digits.
        {
            a = prod % 10;
            prod /= 10;
            b = prod;
            b += a;
            prod = b;
        }
        sum = sum + prod;
        Cnum /= 10;
    }

    while (temp > 0) //this loop is to check the sum of the left out digits
    {
        y = temp % 10;
        sum2 = sum2 + y;
        temp /= 100;
    }
    sumFin = sum + sum2;
    if (sumFin % 10 == 0)
    {
        if ((Cnum2 >= 340000000000000 && Cnum2 <= 349999999999999) || (Cnum2 >= 370000000000000
             && Cnum2 <= 379999999999999)) // range of american express cards
        {
            printf("AMEX\n");
        }
        else if (Cnum2 >= 5100000000000000 && Cnum2 < 5600000000000000) // range of master cards
        {
            printf("MASTERCARD\n");
        }
        else if ((Cnum2 >= 4000000000000 && Cnum2 <= 4999999999999) || (Cnum2 >= 40000000000000 && Cnum2 <= 49999999999999)
                 || (Cnum2 >= 400000000000000 && Cnum2 <= 499999999999999)
                  || (Cnum2 >= 4000000000000000 && Cnum2 <= 4999999999999999)) // range of visa cards
        {
            printf("VISA\n");
        }
        else
        {
            printf("INVALID\n"); // this prints if the card is invalid
        }
    }
    else
    {
        printf("INVALID\n");
    }

}