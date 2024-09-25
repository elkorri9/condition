#include <stdio.h>

int main() {
  float a ;
  
  printf("saisir un nombre sltp : ") ;
  scanf("%f",&a);
  
  if (a > 0)
  printf("le nombre que vous saisir est un nombre positif.");
  
  else if (a == 0)
  printf("le nombre que vous saisir est un nombre null.");
  
  else
  printf("le nombre que vous saisir est un nombre negative.");



    return 0;
}