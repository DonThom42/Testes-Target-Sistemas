#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void) {
  float faturamento[30] = {22174.1664, 24537.6698, 26139.6134, 0.0, 0.0, 26742.6612,
                           0.0, 42889.2258, 46251.174, 11191.4722, 0.0, 0.0, 3847.4823,
                           373.7838, 2659.7563, 48924.2448, 18419.2614, 0.0, 0.0,
                           35240.1826, 43829.1667, 18235.6852, 4355.0662, 13327.1025,
                           0.0, 0.0, 25681.8318, 1718.1221, 13220.495, 8414.61};
  float min = faturamento[0], max = faturamento[0], soma, media;
  int diasPositivos = 0, dias = 0;
  
  for(int i = 0; i < 30; i++){
    soma += faturamento[i];
    if(faturamento[i] != 0.0){
      diasPositivos++;
    }
    
    if(min > faturamento[i] && faturamento[i] != 0.0){
      min = faturamento[i];
    }
    if(max < faturamento[i]){
      max = faturamento[i];
    }
  }
  
  media = (float) soma/diasPositivos;
  
  for(int i = 0; i < 30; i++){
    if(faturamento[i] > media){
      dias++;
    }
  }
  
  printf("Menor valor faturado no ultimo mes: %f\n", min);
  printf("Maior valor faturado no ultimo mes: %f\n", max);
  printf("Dias em que o faturamento foi maior que a media mensal(%f): %d\n", media, dias);
  
  return 0;
}