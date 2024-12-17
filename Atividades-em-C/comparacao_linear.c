#include <stdio.h>
#include <string.h>

int main(void){
    char palavra[50];
    char *strings[] = {"banana","uva","pera"};
    printf("Qual fruta deseja encontrar na lista: ");
    scanf("%s",palavra);
    for (int i = 0 ; i < 3; i++){
        if(strcmp(*strings,palavra)==0){
            printf("Se encontra na lista");
            return 0;
        }
    printf("Nao se encontra na lista");
    return 1;
    }

}