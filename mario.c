#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int h;
    int x;
    
    do
    {
        printf("Please enter a height for the pyramid: \n");
        h = GetInt();
        x = h;
    }  
    while (h < 0 || h > 23);

    if (h >= 0 && h <= 23)
    {
        for (int i = 0; i < x; i++)
        {
            for (int i = 1; i < h; i++)
            {
                printf(" ");
            }
            for (int i = x; i + 2 > h; i--)
            {
                printf("#");
            }
            printf("\n");
            h = h - 1;
        }
    }
}
