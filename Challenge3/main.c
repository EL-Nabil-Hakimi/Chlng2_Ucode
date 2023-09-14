#include <stdio.h>
#include <stdlib.h>

int main()
{   int x ,y ;
    printf("Tapez Valeur 1\n");
    scanf("%d" ,&x);
    printf("Tapez Valeur 2\n");
    scanf("%d" ,&y);
    int somme = 0 ;
    if(x != y){
        somme = x + y;
        printf("La somme est = %d" , somme);
    }
    else{
        somme = x * x * x;
        printf("%d * %d * %d = %d" ,x , x, x, somme);
    }
    return 0;
}
