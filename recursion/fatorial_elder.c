#include <stdio.h>

unsigned long long fatorial(unsigned n, unsigned long long result){
  if(n <= 1){
    return result;
  }
  
  printf("Fatorial: %llu\n", result * n); 
  result *= n;
  return fatorial(n - 1, result);
}

int main(){
  int entrada;
  
  printf("Entrada: ");
  scanf("%d", &entrada);
  
  printf("Saída: %llu\n", fatorial((entrada - 1), entrada));
  
  return 0;
}
