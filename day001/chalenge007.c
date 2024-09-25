#include <stdio.h>

int main() {
  char a ;
  
  printf("saisir un character sltp : ") ;
  scanf("%c",&a);
  
  if (a >= 'A' && a<='Z')
  printf("le character que vous saisir est un character majuscul.");
  
  
  
  else
   printf("le character que vous saisir est un character minscul.");



    return 0;
}