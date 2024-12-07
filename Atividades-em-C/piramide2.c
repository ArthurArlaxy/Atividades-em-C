#include <stdio.h>

void hash( int hashes);

int main(void){
    int tamanho;
    printf("Qual vai ser o tamanho da sua piramide: ");
    scanf("%i", &tamanho);
    for (int i=0; i < tamanho; i++){
        hash(i + 1);
        printf("\n");
    }
}

void hash(int hashes){
    for (int i=0; i < hashes ; i++ ){
        printf("#");
    }
}