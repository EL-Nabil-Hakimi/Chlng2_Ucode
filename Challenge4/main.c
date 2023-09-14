#include <stdio.h>
#include <stdlib.h>

int main()


{
    float a , b ,c ,delta ,X1 , X2 ;

    printf("calculer les solutions possible d’une équation 2ème degré.\n");

    printf("Tapez 'a' ? \n" );

    scanf("%f" , &a);

    printf("Tapez 'b' ? \n" );

    scanf("%f" , &b);

    printf("Tapez 'c' ? \n" );

    scanf("%f" , &c);

    delta = b * b - (4*a*c);

    if (delta > 0){
        X1 = (-b + sqrt(delta)) / (2*a);
        X2 = (-b - sqrt(delta) )/ (2*a);
       printf("il ya 2 solutions = %.2f - %.2f" , X1 , X2);


    }
    else if (delta == 0){

        X1 = (-b) / (2*a);

        printf("il ya une seule solution = %.2f" , X1);



    }

    else{
        printf("Equation Impossible !!!!");
    }














    return 0;
}
