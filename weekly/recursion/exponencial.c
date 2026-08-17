#include <stdio.h>

unsigned long long exponencial(unsigned n, unsigned e){
  if(e == 0){
    return 1;
  }
  
//  printf("exponencial: %lld\n", (n * exponencial(n - 1)));    
  return n * exponencial(n, (e - 1));
} 

int main(){
  int base;
  int expo;
  
  printf("Base: ");
  scanf("%d", &base);
  
  printf("Expo: ");
  scanf("%d", &expo);
  
  printf("Saída: %lld\n", exponencial(base, expo));
  
  return 0;
}
