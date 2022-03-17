#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int n = get_int("n: ");

    if (n % 2 == 0) // Neste caso o % funciona como o resto da divisão. Se for 0, o numero é par!
    {
        printf("n is par\n");
    }

    else
    {
        printf("n é impar\n");
    }
}