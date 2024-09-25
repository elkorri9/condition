#include <stdio.h>

int main() {
  char a ;
  
  printf("saisir un character sltp : ") ;
  scanf("%c",&a);
  
  if (a >= 'A' && a<='Z')
  printf("le character que vous saisir est un character alphabet majuscul.");
  
  
  
  else if (a >= 'a' && a<='z')
   printf("le character que vous saisir est un character alphabet minscul.");
   
   else
   printf("le character que vous saisir est un character n'est pas alphabet .");
   



    return 0;
}