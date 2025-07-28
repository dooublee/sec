 #include <stdio.h>

 int puissance(int n){

    return n * n;
 }

 int main(){
    int n,p;
    printf("entrer la valeur:");
    scanf("%d", &n);

    p = puissance(n);

    printf("la puissance de %d est : %d", n,p);
 }