//to verify the ISBN of a book
#include<stdio.h>
#include<cs50.h>
#include<math.h>

int main(void)
{
    long isbn;
    int x, y = 9, sum = 0;
    do
    {
        isbn = get_long("ISBN: ");
    }
    while (isbn < 9999999 || isbn > 9999999999);  //to repromt user when entry is wrong

    long temp = isbn; //to get the last digit after the loop

    isbn /= 10;  //to get rid of the last digit

    while (isbn > 0)
    {
        x = isbn % 10;  // to get the last digit
        sum = sum + (x * y);
        y--;
        isbn /= 10; // to remove the last digit
    }
    int sumMod = sum % 11;
    int lastDig = temp % 10;
    sum = sum + (lastDig * 10);
    if (sumMod == lastDig && sum % 11 == 0)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }
}
