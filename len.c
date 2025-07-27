#include <stdio.h>
#include <string.h>


int main(){

    char a[100];

    printf("entrer une phrase :");
    fgets(a, sizeof(a), stdin);

    a[strcspn(a, "\n")] = '\0';

    int lang = strlen(a);

    printf("%d", lang);
}