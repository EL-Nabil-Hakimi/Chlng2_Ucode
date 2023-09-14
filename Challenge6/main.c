#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x ;
    printf("Tapez Une Valeur ? \n");
    scanf("%d" , &x);
    if(x<0){
        printf("%d est un nombre est négatif" , x);
    }
    else if(x>0){
            printf("%d est un nombre est Positif" , x);

    }
    else{
        printf("le nombre est égal à zéro.");
    }

    return 0;
}
