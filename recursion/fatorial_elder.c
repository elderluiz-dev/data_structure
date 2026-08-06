#include <stdio.h>

unsigned long long fatorial(unsigned n){
  if(n <= 1){
    return 1;
  }
  
  unsigned long long result = n * fatorial(n - 1);
  
  printf("Fatorial: %llu\n", result);    
  return result;
}

int main(){
  int entrada;
  
  printf("Entrada: ");
  scanf("%d", &entrada);
  
  printf("Saída: %lld\n", fatorial(entrada));
  
  return 0;
}
