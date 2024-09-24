#include <stdio.h>

int main() {
    
    int a , b , s , rs ;
    
    printf("entrer le premier nombre : ");
    scanf("%d",&a);
    
    printf("entrer le deusieme nombre : ");
    scanf("%d",&b);
    
    s = a + b ;
    
    if (a==b){
        printf("la somme de a + b est : %d \n",s);
        rs = s * 3 ;
        printf("le triple de la somme de a + b est : %d",rs);
        
    }
    else 
    printf("la somme de a + b est : %d",s);
        
        
 
    
    

    
    
    
    
    

    return 0;
}