#include <stdio.h>


void Arthur(void)
{
    printf("Meow\n");
}

int main(void)
{
    int counter = 0;
    while(counter < 3)
    {
        Arthur();
        counter++;
    }
}



