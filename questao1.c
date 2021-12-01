

#include <stdio.h>

int main() {

int arr[10];
arr[0]=1;
arr[1]=2;
arr[2]=3;
arr[3]=4;
arr[4]=5;
arr[5]=6;
arr[6]=7;
arr[7]=8;
arr[8]=9;
arr[9]=10;

printf("Digite uma posicao da matriz de 0 a 9: \n");

int i;
scanf("%i" , &i);
if(i < 10){
  printf("%s%i" , "O valor correspondente a essa posicao eh: " , arr[i]);
} else {
  printf("O valor digitado nao corresponde ao solicitado!\n");
}


  return 0;
}