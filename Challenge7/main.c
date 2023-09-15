#include <stdio.h>
#include <stdlib.h>

int main() {
    char ltr;


    printf("Tapez un  lettre : ");
    scanf("%c" , &ltr);

    int nr1 = (int) ltr;

    if (nr1>=65 && nr1<=90){

        printf("La Lettre que Vous Choisez est un letter Majuscules");
    }

    else {
        printf("La Lettre que Vous Choisez est un letter Minicules");


    }

    return 0;
}
