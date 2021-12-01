#include <stdio.h>

int main() {

float arr[10];
int i;

printf("Digite as nota dos alunos: \n");

for( i=0; i<10; i++){
  printf("\nNota %d =" , i+1);
  scanf("%f" , &arr[i]);
}

float soma=0;

for(i=0; i<10; i++){
soma += arr[i];
}
printf("\nA media da turma eh: %f\n" , soma/10);
  
  int num=0;
  int x;
  for (i=0; i<10; i++){
  if(arr[i]>=5) {
    x=1;
  } else {
    x=0;
  }
     num += x;
  }
  
  printf("\nO numero de aluno que estao com a nota acima da media eh: %d\n" , num);
  
  return 0;
}