#include <stdio.h>

int main(){
  
enum {jan, fev, mar, abr, maio, jun, jul, ago, set, out, nov, dez}mes;

  int num;

  printf("escolha um mes: ");
  scanf("%d", &num);

  num = num - 1;

  if(num == jan) {printf("janeiro\n");}
  else if(num == fev){printf("fevereiro\n");}
  else if(num == mar){printf("março\n");}
  else if(num == abr){printf("abril\n");}
  else if(num == maio){printf("maio\n");}
  else if(num == jun){printf("junho\n");}
  else if(num == jul){printf("julho\n");}
  else if(num == ago){printf("agosto\n");}
  else if(num == set){printf("setembro\n");}
  else if(num == out){printf("outubro\n");}
  else if(num == nov){printf("novembro\n");}
  else if(num == dez){printf("dezembro\n");}
else{printf("mes invalido!\n");}
 
 
 
  return 0;
}