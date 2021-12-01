#include <stdio.h>

int main() {
  char arr[6][5];
  char str[31];

  int x = 0;

  printf("escreva uma frase com no maximo 30 caracteres: \n");
  scanf("%30[^\n]", str);

  for (int i = 0; i < 6; i++) {
    for(int j = 0; j < 5; j++){
      arr[i][j] = str[x];
      x++;
    }
  }

  printf("\n");

  for (int i = 0; i < 5; i++) {
    printf("coluna %d:\n", i + 1);
    for(int j = 0; j < 6; j++){
      printf("%c\n", arr[j][i]);
    }
  }

  for (int i = 0; i < 6; i++) {
    printf("linha %d:\n", i + 1);
    for(int j = 0; j < 5; j++){
      printf("%c\n", arr[i][j]);
    }
   }

  return 0;
}