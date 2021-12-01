#include <stdio.h>
#include <string.h>
#include <stdlib.h>


int main(){
 
  struct{
    char email[100];
    char mat[21];
  }al[10];
  
  char input[100];

  for (int i = 0 ; i < 10; i++){
    
    printf("email:\n");
    scanf("%[^\n]s", al[i].email);

    getchar();

    printf("matricula:\n");
    scanf("%[^\n]s", al[i].mat);

    getchar();

  }
    

  printf("digite o email do aluno:\n");
  scanf("%s", input);
  int f = 0;

  for (int j = 0; j<10 ; j++){

    if(strcmp(input, al[j].email) == 0){
      printf("esse email pertence ao aluno cuja matrucula eh: %s\n", al[j].mat);
      f = 0;
      break;
    } else {
      f = 1;
    }
  }

  if (f == 1){printf("email inexistente!");}

  return 0;
}