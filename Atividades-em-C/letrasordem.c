#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void){;
    char frase[100];
    int i,lenght,n;

    printf("Digite uma frase para ver se esta em ordem alfabetica: ");
    scanf("%s", frase);
    lenght = strlen(frase);

    for (i = 0; i < lenght; i++){
        frase[i] = toupper(frase[i]);
    }
    i=0;
    for (i = 1; i < lenght; i++){
        if (frase[i] >= frase[i-1]){
            n = 1;
        }
        else{
            n=0;
            break;
        }
        }
        printf("A frase %s ", frase);
    if(n == 1){
        printf("esta em ordem\n");
    }
    else{
        printf("nao esta em ordem\n");
    }
    return 0;
    }