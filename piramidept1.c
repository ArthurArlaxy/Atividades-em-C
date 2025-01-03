#include <stdio.h>

int main(void){
    int altura,rep,j,i;
    printf("Qual sera a altura da sua piramide: ");
    scanf("%i", &altura);
    rep = 1;
    j=0;
    i=0;
    while (j < altura){
        while (i < rep){
            printf("#");
            i+=1;
        }
        printf("\n");
        rep+=1;
        j+=1;
        i=0;
    }
}