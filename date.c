#include <stdio.h>
#include <string.h>

int main(){

    char date[20];
    int jour,mois,annee;
    char m[20];

    printf("entrer la date (ex : 23/03/2023) :");
    scanf("%s", date);
    sscanf(date, "%d/%d/%d", &jour,&mois,&annee);

    switch (mois)
    {
    case 1:
        strcpy(m, "jan");
        break;
    case 2:
        strcpy(m, "fev");
        break;
    case 3:
        strcpy(m, "mar");
        break;
    case 4:
        strcpy(m, "avr");
        break;
    case 5:
        strcpy(m, "may");
        break;
    case 6:
        strcpy(m, "jun");
        break;
    case 7:
        strcpy(m, "juil");
        break;
    case 8:
        strcpy(m, "aou");
        break;
    case 9:
        strcpy(m, "sep");
        break;
    case 10:
        strcpy(m, "oct");
        break;
    case 11:
        strcpy(m, "nov");
        break;
    case 12:
        strcpy(m, "dec");
        break;
    default:
        strcpy(m, "invalid");
        break;
    }

    printf("la date : %d-%s-%d", jour,m,annee);

    return 0;
}