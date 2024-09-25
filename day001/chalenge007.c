#include <stdio.h>

int main() {
  char a ;
  
  printf("saisir un character sltp : ") ;
  scanf("%c",&a);
  
  if (a >= 65 && a<= 90)
  printf("le character que vous saisir est un character majuscul.");
  
  
  
  else (a >=97 && a<= 122 )
   printf("le character que vous saisir est un character minscul.");



    return 0;
}
