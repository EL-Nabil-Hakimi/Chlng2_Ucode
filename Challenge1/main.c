#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x = 0;
    printf("Tapez Une Valeure \n");
    scanf("%d" , &x);
    int Y = x%2;

    if (Y==0){
        printf("%d Est Un Nombre Paire" ,x);
    }
    else{
        printf("%d Est Un Nombre Impaire" , x);
    }
    return 0;
}
