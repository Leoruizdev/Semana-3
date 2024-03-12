#include <stdio.h>

int main(){
  int num;

  printf("Digite um número: ");
  scanf("%d", &num);

  printf("OS divisores de %d são: ", num);
  for(int divisor = 1; divisor <= num; divisor++){
    if (num % divisor == 0){
      printf("%d", divisor);

      if (divisor != num){
      printf(" ");
      }
    }
  }

  return 0;
}
