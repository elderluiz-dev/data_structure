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
  
  int maior = p[0];
  int pma;
  int menor = p[0];
  int pme;
  
  printf("\n");
  
  for(int i = 0; i < n; i++){
    if(p[i] > maior){
      maior = p[i];
      pma = i;
    }
    if(p[i] < menor){
      menor = p[i];
      pme = i;
    }
  }
  
  pma++;
  pme++;
  
  printf("Maior elemento: %d, posição: %d | Menor elemento: %d, posição: %d\n", maior, pma, menor, pme);
  
  free(p);
  
  return 0;
}
