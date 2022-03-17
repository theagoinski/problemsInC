#include <cs50.h>
#include <stdio.h>

bool valid_triangle(int a, int b, int c);
int main(void)
{
    int sides[3];
    
    for (int i = 0; i < 3; i++)
    {
        sides[i] = get_int("Input three integer number: ");
    }
    if (valid_triangle (sides[0], sides[1], sides[2]) == true)
    {
        printf("This triangle is valid!\n");
    }
    else
    {
        printf("This triangulo is invalid.\n");
    }
      
    return 0;
}

bool valid_triangle(int a, int b, int c)
{

    if (a < 0 || b < 0 || c < 0)
    {
        return false;
    }

    else if (a + b < c || a + c < b || b + c < a)
    {
        return false;
    }

    else
    {
        return true;
    }
}