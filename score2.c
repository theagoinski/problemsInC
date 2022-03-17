#include <stdio.h>
#include <cs50.h>



int main (void){
    
    int n = get_int("How many scores do you want to calculate? ");
    int scores[n];
    int sum;
    int avrg;
    
    sum = 0;

    for (int i = 0; i < n; i++){
        scores[i] = get_int("Score:");
        sum = sum + scores[i];
    }

    avrg = sum/n;

    printf("Average is %i\n", avrg);
} 