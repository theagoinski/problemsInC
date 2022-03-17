#include <cs50.h>
#include <stdio.h>

int main(int argc, string argv[]){
    if(argc == 2){ //argc - argument count. so, if there are 2 (the name of the person as one, then...)
        printf("hello, %s\n", argv[1]);
    }
    else{
        printf("Hello, world!\n");
    }
}