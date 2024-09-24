#include <stdio.h>
#include <math.h>

int main() {
    
   float a , b , c , d , x , x1 ,x2;
    
    printf("entrer les valeur de a , b et c : ");
    scanf("%f %f %f",&a ,&b ,&c);
    
   d = pow(b,2) - (4*a*c);
    
    
    if (d < 0){
        printf("pas de solution reel");
 
    }
    else if (d==0){
        x = (-b)/(2*a);
        printf("la solution est : %.2f ",x);
    }
    else {
        x1= (-b - sqrt(d))/(2*a);
        x2= (-b + sqrt(d))/(2*a);
        printf("les solutions sont : %.2f et %.2f",x1,x2);
        
    }
    
        
        
 
    
    

    
    
    
    
    

    return 0;
}