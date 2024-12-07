#include <stdio.h>

int main(void){
    char first_name[30];
    char last_name[30];
    int number;
    int ddd;
    int country_post;
    printf("What is the first name? ");
    scanf("%s", first_name);
    printf("What is the last name? ");
    scanf("%s", last_name);
    printf("What's the number? ");
    scanf("%i", &number);
    printf("What's the DDD? ");
    scanf("%i", &ddd);
    printf("What's the country post? ");
    scanf("%i", &country_post);
    printf("The Contact was saved\nName:%s %s\nNumber: %i %i %i",first_name,last_name,country_post,ddd,number);
}