#include<cs50.h>
#include<stdio.h>
#include<math.h>

int main(void)
{
    long change;
    change = get_long();

    int dollar, quater, dime, nickel, coin;
    dollar = change/1;
    coin = dollar*4;
    change = fmodl(change, 1);
    if(change > 0.25)
    {
        quater = change/0.25;
        coin = coin+quater;
        change = fmodl(change, 0.25);
    }
    if(change > 0.10)
    {
        dime = change/0.10;
        coin = coin+dime;
        change = fmodl(change, 0.10);
    }
    if(change > 0.05)
    {
        nickel = change/0.05;
        coin = coin+nickel;
       change = fmodl(change, 0.05);
    }
    if(change > 0.01)
    {
        coin = coin+change;
    }
    printf("%i", coin);
}