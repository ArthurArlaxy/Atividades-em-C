#include <stdio.h>
#include <string.h>

typedef struct 
{
    char *name;
    char *number;
}person;



int main(void){
    char pessoa[50];
    person people[2];
    
    people[0].name = "Arthur";
    people[0].number = "21 97673-9777";

    people[1].name = "Maria";
    people[1].number = "21 91234-5678";

    printf("Qual pessoa deseja encontrar na lista: ");
    scanf("%s",pessoa);
    for (int i = 0 ; i < 2; i++){
        if(strcmp(people[i].name,pessoa)==0){
            printf("Se encontra na lista. Numero: %s", people[i].number);
            return 0;
        }
    }
    printf("Nao se encontra na lista");
    return 1;
}