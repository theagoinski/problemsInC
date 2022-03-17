#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main (void){
    string s = get_string("Before: ");
    for (int i = 0, n = strlen(s); i < n; i++){
        s[i] = s[i]-32;
    }
    printf("%d\n", s[0]);
    
}