//To calculate the sum of getting a doubled amount of money each day for a month
#include<stdio.h>
#include<cs50.h>
#include<math.h>

int main(void)
{
    int month;
    float penny;
    float dollar = 0;
    long sumpenn;
    do
    {
        month = get_int("Days in Month: ");
    }
    while (month > 31 || month < 28);  // to repromt if user enter the wrong number
    do
    {
        penny = get_int("Pennies on First Day: ");
    }
    while (penny < 1); //to rempromt if user enters negative numbers.
    sumpenn = (penny * (pow(2, (month)))) - penny;
    sumpenn = round(sumpenn);
    dollar = sumpenn / 100;
    float x = fmodf(sumpenn, 100);
    x--;
    printf("$%0.2f\n", dollar);
}