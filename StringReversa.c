#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
  char string[100], stringReversa[100];
  int tam;
  
  fgets (string, 100, stdin);
  tam = (int) strlen(string)-1;
  
  for(int i = 0; i < tam; i++){
    stringReversa[(tam-1)-i] = string[i];
  }
  
  printf("String inserida: %s", string);
  printf("String reversa: %s", stringReversa);
  
  return 0;
}