#include <stdio.h>
#include <stdlib.h>

int main(){
  int n = 100000000;
  
  int *p = calloc(n, sizeof(*p));
  if(p == NULL){
    printf("Erro de alocação!");
    return 1;
  }
  
  int soma = 0;
  for(int i = 0; i < n; i++){
    soma += p[i];
  }
  
  printf("Soma dos elementos: %d", soma);
  
  free(p);
  
}
