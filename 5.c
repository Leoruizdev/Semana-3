#include <stdio.h>


int main(){

  int num, soma = 0 ;

  printf("Digite um número: ");
  scanf("%d", &num);

  for (int divisor = 1; divisor < num; divisor+=1){ // ou divisor++
    if (num % divisor == 0){
      soma = soma + divisor;
    }
  }

  if (soma == num){
    printf("%d é um numero perfeito", num);
  }
  else{
    printf("%d não é um número perfeito", num);
  }

  return 0;
}
