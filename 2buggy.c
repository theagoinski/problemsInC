#include <stdio.h>
#include <cs50.h>

int get_negative_int(void);

int main (void)

{
    int n = get_negative_int();
    printf("n is %i\n", n);
}


int get_negative_int(void){
    int n;
    do{
        n = get_int("Negative Integer: ");
    }
    while(n < 0);{
        return n;
    }

}