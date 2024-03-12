#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
  int aleat, palpite;

  srand(time(NULL)); 

  aleat = 1 + rand()%100;

  printf("Digite seu número: ");
  scanf("%d", &palpite);


  while (palpite < 1 || palpite > 100){
    printf("Valor inválido. Coloque novamente: ");
    scanf("%d", &palpite);
  }

  if (palpite == aleat){
    printf("Você acertou!\n");
  }
  else if (palpite < aleat){
    printf("Você chutou muito baixo! O valor correto é %d\n", aleat);
  }
  else{
    printf("Você chutou muito alto! O valor correto é %d\n", aleat);
  }
  return 0;
}
