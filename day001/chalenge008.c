#include <stdio.h>

int main() {
    float moyen ;
    
    printf("saisir la moyen d'etudiant : ");
    scanf("%f",&moyen);
    
    if(moyen>=16)
    printf("la mention d'etudiant est très bien.");
    
    
   else if(moyen>=14  && moyen<=16)
    printf("la mention d'etudiant est  bien.");
    
    else if(moyen>=12  && moyen<=14)
    printf("la mention d'etudiant est assez bien .");
    
     else if(moyen>=10  && moyen<=12)
    printf("la mention d'etudiant est passable .");
    
    else
    printf("la mention d'etudiant est recale .");
    
    
    return 0;
}