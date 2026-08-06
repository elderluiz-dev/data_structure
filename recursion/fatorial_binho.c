#include <stdio.h>

unsigned long long fatorial(unsigned n){
  if(n <= 1){
    return 1;
  }
  
  printf("Fatorial: %lld\n", (n * fatorial(n - 1)));    
  return n * fatorial(n - 1);
}

int main(){
  int entrada;
  
  printf("Entrada: ");
  scanf("%d", &entrada);
  
  printf("Saída: %lld\n", fatorial(entrada));
  
  return 0;
}
