#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <math.h>

int main (void)
{
    //make user get us the text
    string t = get_string("Input Text: ");

    //counting the letters of which word!
    int letters = 0;
    for (int i = 0; i < strlen(t); i++)
    {
      if ((t[i] >= 'a' && t[i] <= 'z') || (t[i] >= 'A' && t[i] <= 'Z'))
      {
          letters++;
      }  
    }

    //counting how many words there are in the text.
    int w = 1;
    for (int i = 0; i < strlen(t); i++)
    {
        if (t[i] == ' ')
        w++;
    }

    //counting how many phrases by identifying how many !, . ? are.

    int s = 0;
    for (int i = 0; i < strlen(t); i++)
    {
        if (t[i] == '!' || t[i] == '.' || t[i] == '?')
            s++;
    }

    //getting the formula to get the reader level

    float L = (letters/w) * 100;  
    float S = (s/w) * 100;
    float C = 0.0588 * L - 0.296 * S - 15.8;//using a float first
    int index = round(C);

    if (index < 1)
    {
        printf("Before Grade 1\n");
        return 0;
    }
    else if (index >= 16)
    {
        printf("Grade 16+\n");
        return 0;
    }
    else
    {
        printf("Grade %i\n", index);//converting to an integer   
    }
}