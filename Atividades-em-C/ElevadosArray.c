#include <stdio.h>

int main (void){
    int lenght, n, ele;
    printf("2 elevado a : ");
    scanf("%i", &ele);
    int elevado[ele];
    for (lenght = 0; lenght < ele; lenght++){
        if (lenght == 0)
        {
            n=1;
        }
        elevado[lenght]=n;
        printf("%i...",elevado[lenght]);
        n*=2;
    }
    printf("Fim");
}