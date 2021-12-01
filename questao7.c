#include <stdio.h>

int main (){
    int d;
    int m;
    int a;
    int i;


  printf("dia:\n");
  scanf("%d", &d); 

  printf("mes:\n");
  scanf("%d", &m); 

  printf("ano:\n");
  scanf("%d", &a);

  printf("selecione o formato da data:\n 0= sistema do Brasil\n 1= sistema dos EUA\n");
  scanf("%i", &i);
  
  if (i == 0){
    printf("%d / %d / %d\n", d,m,a);
  } else if (i == 1){
    printf("%d / %d / %d\n", m, d, a);
  } else {
    printf("voce nao selecionou um formato invalido!\n");
  }
  
  
  return 0;
}