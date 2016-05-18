#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

int main(int argc, string argv[])
{
    if(argc != 2)
    {
        printf("You forgot about key");
        return 1;
    }    
    
    
    string key = argv[1];
    
    for (int i = 0; i < strlen(argv[1]); i++)
    {
        if (!isalpha(key[i]))
        {
            printf("You entered a non-alphabetical character\n");
            return 1;
        }
    }
    
    
    string str = GetString();
    
    int j = 0;
    for ( int i = 0; i < strlen(str); i++)
    {
       j = j % strlen(key);
        if (isalpha(str[i]) && isalpha(key[j]))
            {   
                if (islower(str[i]))
                {
                        
                    if (islower(key[j]))
                    {
                        str[i] = (((str[i] - 'a') + (key[j]-'a')) % 26) + 'a';
                        printf("%c", str[i]);
                        j++;
                    }
                    
                    else if(isupper(key[j]))
                    {
                        str[i] = (((str[i] - 'a') + (key[j]-'A')) % 26) + 'a';
                        printf("%c", str[i]);
                        j++;
                    }
                }
                    
                else if (isupper(str[i]))
                {
                    
                    if (isupper(key[j]))
                    {
                        str[i] = (((str[i] - 'A') + (key[j] - 'A')) % 26) + 'A';
                        printf("%c", str[i]);
                        j++;
                    }
                    else  if (islower(key[j]))
                    {
                        str[i] = (((str[i] - 'A') + (key[j] - 'a')) % 26) + 'A';
                        printf("%c", str[i]);    
                        j++;
                    }   
                }
            }
            
            else
            {
                printf("%c", str[i]);
            }
            
        }
    printf("\n");
    
    return 0;
}
