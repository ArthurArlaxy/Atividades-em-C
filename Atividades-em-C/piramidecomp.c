#include <stdio.h>

int main(void){
    int rep, altura, espaco;
    rep = 1;
    printf("CRIE SUA PIRAMIDE ");
    printf("Qual sera a altura da sua piramide: ");
    scanf("%i", &altura);
    for (int i = 0; i < altura; i++){
        espaco = altura - rep;
        for (int k = 0; k < espaco;k++){
            printf(" ");
        }
        for (int j = 0;j < rep; j++){    
            printf("#");
        }
        printf("  ");
        for (int j = 0;j < rep; j++){
            printf("#");
        
        }
        printf("\n");
        rep++;
    }
}