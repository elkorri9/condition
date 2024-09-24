#include <stdio.h>

int main() {
    char voiyelle ;
    printf("saisir un charcter : ");
    scanf("%c",&voiyelle);
    
    switch(voiyelle){
        
        case 'a': printf("%c est un character voyelle",voiyelle);
        break;
        case 'e': printf("%c est un character voyelle",voiyelle);
        break;
        case 'u':printf("%c est un character voyelle",voiyelle);
        break;
        case 'o':printf("%c est un character voyelle",voiyelle);
        break;
        case 'i':printf("%c est un character voyelle",voiyelle);
        break;
        case 'y':printf("%c est un character voyelle",voiyelle);
        break;
        
        default: printf("%c est un character non voyelle ",voiyelle);
    }
   
    
        
        
 
    
    

    
    
    
    
    

    return 0;
}