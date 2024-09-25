#include <stdio.h>

int main() {
    
int an , mois , jour , heur , min , scd ;
int menu ;
printf("veuillez saisir un nombre d'an : ");
scanf("%d",&an);


printf("1-mois. \n ");
printf("2-jour.\n");
printf("3-heur.\n");
printf("4-minute.\n");
printf("5-second.\n");

printf("choisir par menu pour convertir votre nombre d'anne : ");
scanf("%d",&menu);

if (menu==1){
    mois = an * 12 ;
    printf("la convertir par mois est : %d mois",mois);
}

else if (menu == 2){
    jour = an * 365 ;
    printf("la convertir par jours est : %d jours",jour);
}


else if (menu == 4){
   min  = an * 24 * 365 * 60 ;
    printf("la convertir par min est : %d min",min);
}

else if (menu == 5){
   scd  = an * 24 * 365 * 60 * 60 ;
    printf("la convertir par scd est : %d scd",scd);
}


    return 0;
}