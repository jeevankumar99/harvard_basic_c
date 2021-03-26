//converts temperature entered in celcius to fahrenheit
#include<cs50.h>
#include<stdio.h>
int main(void)
{
    float fahr;
    float cel = get_float("C: ");
    fahr = ((cel * 9) / 5) + 32;
    printf("F: %0.1f\n", fahr);
}