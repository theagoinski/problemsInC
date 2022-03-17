#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(){
    int h, m, s;
    
    printf("Set time: \n");
    scanf("%d%d%d", &h, &m, &s);
    if(h>24 || m>60 || s>60){
        printf("ERROR!\n");
        exit(0);
    }
    while(1)//here we are creating an infinite loop that will repeat itself forever)
    {
        s++;
        if(s>59){
            m++;
            s=0;
        }
        if(m>59){
            h++;
            m=0;
        }
        if(h>23){
            h=0;
        }
       
        printf("\n %02d:%02d:%02d",h,m,s);
        sleep(1);
        system("clear");//clears the screen!
    }

}