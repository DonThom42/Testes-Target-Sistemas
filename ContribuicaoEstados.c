#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void) {
  float soma, faturamento[5] = {67836.43, 36678.66, 29229.88, 27165.48, 19849.53};
  char estados[8] = {"SPRJMGES"};
  int pos = 0;
  
  for(int i = 0; i < 5; i++){
    soma += faturamento[i];
  }
  
  for(int i = 0; i < 4; i++){
    printf("%c%c = %.2f%%\n", estados[pos], estados[pos+1], (faturamento[i]*100)/soma);
    pos += 2;
  }
  printf("Outros = %.2f%%\n", (faturamento[4]*100)/soma);
  
  return 0;
}