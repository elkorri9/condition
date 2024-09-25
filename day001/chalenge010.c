#include <stdio.h>

int main() {
    int j , m , a ;
    
    
    printf("veuillez saisir une date comme JJ/MM/AA : ");
    scanf("%d  %d  %d",&j,&m,&a);
    
    if(m==1)
    printf("%d/janvier/%d",j,a);
    
    else if(m==2)
    printf("%d/fevrier/%d",j,a);
    
     else if(m==3)
    printf("%d/Mars/%d",j,a);
    
    else if(m==4)
    printf("%d/Avril/%d",j,a);
    
    else if(m==5)
    printf("%d/may/%d",j,a);
    
    else if(m==6)
    printf("%d/juin/%d",j,a);
    
    else if(m==7)
    printf("%d/juiller/%d",j,a);
    
    else if(m==8)
    printf("%d/auguste/%d",j,a);
    
    else if(m==9)
    printf("%d/septembre/%d",j,a);
    
    else if(m==10)
    printf("%d/octobre/%d",j,a);
    
    else if(m==11)
    printf("%d/nouvembre/%d",j,a);
    
    else if(m==12)
    printf("%d/decembre/%d",j,a);
    

    return 0;
}
