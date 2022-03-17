#include <stdio.h>
#include <cs50.h>//objective is to figure it out the lenght of a string

int main (void){

    string name = get_string("Name: ");

    int i = 0;

    while(name[i] != '\0'){
        i++;
    }
    printf("%i\n", i);
}