#include <stdio.h>
#include <stdlib.h>

int main(){
// DEFINIÇÃO E LEITURA
  int n;
  n = 5;
  
  int *p = malloc(n * sizeof(*p));
  if(p == NULL){
    printf("Falha na alocação!\n");
    return 1;
  }
  
  printf("Digite os números do vetor: \n");
  for(int i = 0; i < n; i++){
    scanf("%d", &p[i]);
  }
  
  printf("\n");

// LÓGICA DA QUESTÃO
  int x;
  printf("Digite quantos número deseja adicionar: ");
  scanf("%d", &x);
  
  x += n;
  
  int *temp = realloc(p, x * sizeof(*p));
  if(temp == NULL){
    printf("Realloc falhou!");
    return 1;
  }else{
    p = temp;
  }
  
  printf("Digite os novos números do vetor: \n");
  for(int i = n; i < x; i++){
    scanf("%d", &p[i]);
  }
  
  printf("\nVetor completo: ");
  for(int i = 0; i < x; i++){
    printf("%d ", p[i]);
  }
  
// LIBERAÇÃO DE MEMÓRIA E RETURN
  free(p);
  p = NULL;
  return 0;
}
