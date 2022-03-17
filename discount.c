#include <cs50.h>
#include <stdio.h>

float discount (float price, int percent)

int main(void)
{
    float regular = get_float("Regular price: ");
    int percentoff = get_float("Digite o desconto: ");
    printf("Sale price is %.2f\n", discount(regular, percentoff));
}


float discount (float price, int percent)

{
    return price * (100 - percent/100);
}

