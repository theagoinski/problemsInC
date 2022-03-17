#include <cs50.h>
#include <stdio.h>

int main(void)
{
    char a = get_char("Do u agree men r stupid?\n");

    if (a == 'y' || 'Y') // IMPORTANTE: QUANDO EM IF ELSE, USAR APENAS UM PARENTESES PARA A VARIAVEL // || significa OR
    {
        printf("Yep, they rly r.\n");
    }

    else
    {
        printf("Nop, gurl. They r fucking stupid.\n");
    }
}