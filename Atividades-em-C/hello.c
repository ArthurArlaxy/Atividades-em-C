#include <stdio.h>

int main(void) {
    char nome[100];  // Declare nome as a string (array of characters)
    printf("Qual e o seu nome? ");
    scanf("%s", nome);  // Limit input to 99 characters
    printf("Ola, %s", nome);  // Print the string
    return 0;
}
