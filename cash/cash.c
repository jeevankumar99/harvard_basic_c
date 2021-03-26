//To find the minimum number of coins required to give a user change
#include<cs50.h>
#include<stdio.h>
#include<math.h>  //for fmodf, to find the mod of a float number

int main(void)
{
    float change;
    do
    {
        change = get_float("change Owed: ");
    }
    while (change < 0.00); //to repromt the user if negative number is entered

    int dollar, quater, dime, nickel, pennies, coin;  // 100cents,25c,10c,5c,1c and coin is a counter
    dollar = change / 1;
    coin = dollar * 4;
    change = change - dollar;
    change *= 100;
    int changeInt = round(change); //to round of the float value into an integer

    //Number of Quaters
    if (changeInt >= 25)
    {
        quater = changeInt / 25;
        coin = coin + quater;
        changeInt %= 25;
    }

    //Number of Dimes
    if (changeInt >= 10)
    {
        dime = changeInt / 10;
        coin = coin + dime;
        changeInt %= 10;
    }

    //Number of Nickels
    if (changeInt >= 5)
    {
        nickel = changeInt / 5;
        coin = coin + nickel;
       changeInt %= 5;
    }

    //Number of Pennies
    if (changeInt >= 1)
    {
        pennies = changeInt / 1;
        coin = coin + pennies;
    }
    printf("%i\n", coin);
}
