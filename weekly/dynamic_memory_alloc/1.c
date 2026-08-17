#include <stdio.h>
#include <stdlib.h>

int main(){
  int n;
  printf("Digite o tamanho do vetor: ");
  scanf("%d", &n);
  
  int *p = malloc(n * sizeof(*p));
  
  if(p == NULL){
    printf("Falha na alocação!\n");
    return 1;
  }
  
  printf("Digite os números do vetor: ");
  for(int i = 0; i < n; i++){
    scanf("%d", &p[i]);
  }
  
  printf("\n");
  
  for(int i = 0; i < n; i++){
    printf("%d\n", p[i]);
  }
  
  free(p);
  p = NULL;
  
  return 0;
}
