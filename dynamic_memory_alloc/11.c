#include <stdio.h>
#include <stdlib.h>

int main(){
  int n = 50000000;
  
  int *p = malloc(n * sizeof(*p));
  if(p == NULL){
    printf("Erro de alocação!\n");
    return EXIT_FAILURE;
  }

  free(p);
  p = NULL;
  return 0;
}
