#include <stdio.h>
#include <stdlib.h>

int main(){
  
  float produto, valor, quantidade;
  float v[10];

  for(int i = 0; i < 10; i++){
    printf("preço do produto %i: \n", i+1);
    scanf("%f",&produto);
    printf("quantidade: \n");
    scanf("%f",&quantidade);
        
    v[i] = produto * quantidade;
    valor = valor + v[i];
  }
  
  for(int x = 0; x < 10; x++){
    printf("O valor total do produto %d é R$ %0.2f \n", x+1, v[x]);
  }
  printf("O valor total foi R$ %0.2f",valor);

  return 0;
}

