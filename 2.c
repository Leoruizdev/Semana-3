#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
  int aleat, palpite, tentativas;
  tentativas = 0;

  srand(time(NULL)); 

  aleat = 1 + rand()%100;

  printf("Chute um número de 1 a 100: ");
  scanf("%d", &palpite);

  while (palpite < 1 || palpite > 100){
  printf("Valor inválido. Coloque novamente: ");
  scanf("%d", &palpite);
  }


  while (palpite != aleat){
    if (palpite < aleat){
      printf("Você chutou muito baixo!\n");
    }
    else{
      printf("Você chutou muito alto!\n");
    }

    tentativas++;

    printf("Tente novamente: ");
    scanf("%d", &palpite);

    while (palpite < 1 || palpite > 100){
    printf("Valor inválido. Coloque novamente: ");
    scanf("%d", &palpite);
    }

  }
  printf("Parabéns! Você acertou em %d tentativas.\n", tentativas + 1);

  return 0;
}
