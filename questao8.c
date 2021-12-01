#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
  
 
  struct{
    char nome[31];
    char tel[11];
  }cont[10];
  

  for (int i = 0 ; i < 10; i++){
    
    printf("nome: ");
    scanf("%[^\n]s", cont[i].nome);

    getchar();

    printf("telefone: ");
    scanf("%[^\n]s", cont[i].tel);

    getchar();
  }
  
  for (int j = 0; j < 10; j++){
    printf("%s - %s \n", cont[j].nome, cont[j].tel);
  }
  
  return 0;
}