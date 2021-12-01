#include <stdio.h>
#include <string.h>

int main(){
    
 char verbo[30];
  char tempo[30];

  printf("digite um verbo terminado em ar:\n ");
  getchar();

  int tamanho = strlen(verbo);

  strcpy(tempo,verbo);
  tempo[strlen(tempo)-1] = '\0';
  tempo[strlen(tempo)-1] = '\0';

  int tamanho1 = strlen(tempo);

  

  if(verbo[tamanho - 2] == 'a'){
    if(verbo[tamanho-1] == 'r'){

      printf("%s\n", strcat(tempo,"o"));
      memset(tempo + tamanho1, 0, 1);
      printf("%s\n", strcat(tempo,"as"));
      memset(tempo + tamanho1, 0, 1);
      printf("%s\n", strcat(tempo,"a"));
      memset(tempo + tamanho1, 0, 1);
      printf("%s\n", strcat(tempo,"amos"));
      memset(tempo + tamanho1, 0, 1);
      printf("%s\n", strcat(tempo,"ais"));
      memset(tempo + tamanho1, 0, 1);
      printf("%s\n", strcat(tempo,"am"));
    }
  }else {
    printf("voce nao inseriu um verbo terminado em ar!\n");
  }
  return 0;  
}