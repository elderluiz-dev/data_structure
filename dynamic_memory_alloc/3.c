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
  
  printf("Digite os números do vetor: ");
  for(int i = 0; i < n; i++){
    scanf("%d", &p[i]);
  }
  
  printf("\n");

// LÓGICA DA QUESTÃO

  int soma;
  int media;

  for(int i = 0; i < n; i++){
    soma += p[i];
  }

  media = soma / n;
  
  for(int i = 0; i < n; i++){
    if(p[i] > media){
      printf("Item acima da média: %d\n", p[i]);
    }
  }

  free(p);
  
  return 0;
}
