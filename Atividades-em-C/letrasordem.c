#include <stdio.h>
#include <string.h>

int main(void){;
    char frase[100];
    int i,lenght,n;

    printf("Digite uma frase para ver se esta em ordem alfabetica: ");
    scanf("%s", frase);
    lenght = strlen(frase);
    for (i = 1; i < lenght; i++){
        if (frase[i]>= frase[i-1]){
            n = 1;
        }
        else{
            n=0;
            break;
        }
        }
    if(n == 1){
        printf("Esta em ordem");
    }
    else{
        printf("Nao esta em ordem");
    }
    }