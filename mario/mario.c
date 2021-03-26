#include<stdio.h>
#include<cs50.h>

int main(void)
{
    int height, Lspace, Lhash, Mspace, Rhash;
    do
    {
        height = get_int("Height: ");
        if(height==0)
        exit(0);
    }
    while (height > 23 || height < 1);

    for (int row = 0; row < height; row++)  // this loop is for the overall rows
    {
        for (Lspace = row+1; Lspace < height; Lspace++)  // this loops is for the spaces in the left pyramid
        {
            printf(" ");
        }
        for (Lhash = 1; Lhash <= row + 1; Lhash++) // this loop is for the hash in the left pyramid
        {
            printf("#");
        }
        for (Mspace = 0; Mspace < 2; Mspace++)  // this loop is for the space between the two pyramids
        {
            printf(" ");
        }
        for (Rhash = 1; Rhash <= row + 1; Rhash++) // this loop is for the hash in the right pyramid
        {
            printf("#");
        }
        printf("\n"); // this is to go to the next line
    }

}

