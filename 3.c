#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
  int aleat, palpite, tentativas, max_tentativas;
  tentativas = 0;
  max_tentativas = 5;

  srand(time(NULL)); 

  aleat = 1 + rand()%100;

  printf("%d\n", aleat); // teste p ver qual o numero

  printf("Digite um número: ");
  scanf("%d", &palpite);

  while (palpite < 1 || palpite > 100){
    printf("Valor inválido. Coloque novamente: ");
    scanf("%d", &palpite);
    }

  while(palpite != aleat){
    if (palpite < aleat){
      printf("Você chutou muito baixo.\n");
    }
    else{
      printf("Você chutou muito alto.\n");
    }
    tentativas++;

    if (tentativas == max_tentativas){
      printf("Número max atingido. O numero era %d\n", aleat);
      return 0;
    }

    printf("Tente novamente: ");
    scanf("%d", &palpite);

    while (palpite < 1 || palpite > 100){
      printf("Valor Inválido. Digite novamente\n");
      scanf("%d", &palpite);
    }
  }
  printf("Você acertou em %d tentativas\n", tentativas + 1);

  return 0;
}
