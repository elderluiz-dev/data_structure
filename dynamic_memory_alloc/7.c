#include <stdio.h>
#include <stdlib.h>

int main(){
// DEFINIÇÃO E LEITURA
  int n;
  printf("Digite o tamanho do vetor: ");
  scanf("%d", &n);
  
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

  int rem;
  printf("Digite a posição a ser removida: ");
  scanf("%d", &rem);
  
  rem--;
  
  if(rem > n){
    printf("posição inválida, seu programa deu bug :(");
    return 2;
  }
  
  for(int i = rem; i < n; i++){
    p[i] = p[i+1];
  }
  
  int *temp = realloc(p, n-1 * sizeof(*temp));
  if(temp == NULL){
    printf("Realloc falhou!");
    return 1;
  }else{
    p = temp;
  }
  
  printf("Vetor após a remoção: ");
  for(int i = 0; i < n-1; i++){
    printf("%d, ", p[i]);
  }
  
// LIBERAÇÃO DE MEMÓRIA E RETURN
  free(p);
  return 0;
}
