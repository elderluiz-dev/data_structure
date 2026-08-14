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

    int aux;
    
    for(int i = 0; i < n/2; i++){
      aux = p[i];
      p[i] = p[n - i - 1];
      p[n - i - 1] = aux;
    }
  
    printf("Vetor ao contrário:\n");
    for(int i = 0; i < n; i++){
      printf("%d\n", p[i]);
    }    

// LIBERAÇÃO DE MEMÓRIA E RETURN
  free(p);
  return 0;
}
