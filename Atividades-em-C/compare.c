#include <stdio.h>

int main(void){
    int x, y;
    
    printf("What number do you what for X ? ");
    scanf("%i", &x);

    printf("\nWhat number do you want for Y ? ");
    scanf("%i", &y);

    if (x < y){
        printf("%i is less than %i", x, y);
    };

    if (x == y){
        printf("%i is equal than %i",x,y);
    };

    if (x > y){
        printf("%i is greater than %i",x,y);
    };

    return 0;
};
