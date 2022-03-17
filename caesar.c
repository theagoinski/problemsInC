#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main(int argc, string argv[]) 
{
    if (argc != 2)
    {
        printf("Usage: ./caesar key\n");
        return 1; // o retrun é usado para parar a função caso ela chegue aqui.
    }
    for (int i = 0; i < strlen(argv[1]); i++)
    {
        if (isdigit(argv[1][i]) == false)
        {
            printf("Usage: ./caesar key\n");
            return 1;
        }
        
    }
    
    int key;
    string plaintext, userOutput;
    key = atoi(argv[1]);

    plaintext = get_string("Plaintext: ");
    printf("Ciphertext: ");


    int n = strlen(plaintext); // tamanho do input 
    char x; //character converted in case of overlaping the alphabet-y and z
        
    for (int i = 0; i < n; i++) // Enquantoisso seja 0, 1, 2 - para n = 3
    {
        if (islower(plaintext[i]) != 0 && plaintext[i] < 'y')
        {
            printf("%c", ((plaintext[i] + key) % 26));                   
        }
        else if (plaintext[i] == 'y' || plaintext[i] == 'Y')
        {
            if (islower(plaintext[i]) !=0)
            {   
                x = 'a';
                printf("%c", ((x + key) % 26));
            }
            else
            {
                x = 'A';
                printf("%c", ((x + key) % 26)); 
            }                 
        }
        else if (plaintext[i] == 'z' || plaintext[i] == 'Z')
        {
            if (islower(plaintext[i]) != 0);
            {
                x = 'b';
                printf("%c", ((x + key) % 26));
            }
            x = 'B';
            printf("%c", (x + key) % 26);
        }
        else if (islower(plaintext[i]) == 0 && isalpha(plaintext[i]) != 0)
        {
            printf("%c", ((plaintext[i] + key) % 26));
        }


        else
        {
            printf("%c", plaintext[i]);
        }               
    }       
    printf("\n");
}
