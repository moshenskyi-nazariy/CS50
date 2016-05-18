#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

int main(int argc, string argv[])
{
    if(argc != 2)
    {
        printf("Usage: ./caesar key");
        return 1;
    }    
    
    int k = atoi(argv[1]);
    
    string str = GetString();
    
    
    for ( int i = 0; i < strlen(str); i++)
    {
        if(isalpha(str[i]))
            {
                if(islower(str[i]))
                {
                    str[i] = (((str[i] - 97) + k) % 26) + 97;
                    printf("%c", str[i]);
                }
                else if(isupper(str[i]))
                {
                    str[i] = (((str[i] - 65) + k) % 26) + 65;
                    printf("%c", str[i]);
                }
            }
        else
            printf("%c", str[i]);
    }

    printf("\n");
    
    return 0;
}
