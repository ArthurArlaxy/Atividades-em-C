#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void) {
    char frase[100];
    char new_frase[100];
    int p, key;

    printf("Criptografe um texto\n");
    printf("Qual e o texto: ");
    scanf("%s", frase); 
    printf("Quase sera a chave da criptografia(1 a 25): ");
    scanf("%i", &key);
    p = strlen(frase);

    for (int c = 0; c < p; c++) {
        new_frase[c] = frase[c] + key;
    }
    new_frase[p] = '\0'; 
    printf("A frase nova e: %s", new_frase);

    return 0;
}
