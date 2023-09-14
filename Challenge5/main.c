#include <stdio.h>
#include <stdlib.h>

int main() {
    int annee, jours, mois, heures, minutes;
    printf("Choiseze une Annee = ");
    scanf("%d" , &annee);

    if ((annee % 4 == 0 && annee % 100 != 0) || (annee % 400 == 0)) {

        jours = 366;
    mois = jours / 30 ;
    heures = jours * 24 ;
    minutes = heures * 60 ;
    printf("%d Jours , %d Mois , %d Heurs , %d Minutes " , jours , mois , heures , minutes  );


        }
    else{
    jours = 365;
    mois = jours / 30 ;
    heures = jours * 24 ;
    minutes = heures * 60 ;
    printf("%d Jours , %d Mois , %d Heurs , %d Minutes " , jours , mois , heures , minutes  );

    }



    return 0;
}
