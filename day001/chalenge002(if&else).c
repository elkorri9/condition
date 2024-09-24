#include <stdio.h>

int main() {
    char voiyelle ;
    printf("saisir un charcter : ");
    scanf("%c",&voiyelle);
    if(voiyelle == 'a'|| voiyelle== 'o' || voiyelle == 'u' || voiyelle=='e'|| voiyelle=='i'||voiyelle=='y' ){
        printf("%c est un character voyelle",voiyelle);
    }
    else 
    printf("%c est un character non voyelle",voiyelle);

    
    
    
    
    

    return 0;
}