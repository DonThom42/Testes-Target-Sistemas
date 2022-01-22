#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void) {
  int valor, aux, vet[3] = {0, 1, 1};
  
  printf("Digite o valor a ser conferido: ");
  scanf("%d", &valor);
  
  while(vet[2] < valor){
    aux = vet[1] + vet[2];
    vet[0] = vet[1];
    vet[1] = vet[2];
    vet[2] = aux;
  }
  
  if(vet[2] == valor){
    printf("\nO valor pertence a Sequencia de Fibonacci\n");
    return 0;
  } else {
    printf("\nO valor nao pertence a Sequencia de Fibonacci\n");
    return 0;
  }
}