#include <stdio.h>

int mdc(int a, int b){
  if(b == 0) return a; 
  
  printf("a = %d | b = %d | %d mod %d = %d\n", a, b, a, b, (a % b));
  int aux = mdc(b, a % b);
  printf("retorno: %d\n", aux);
  return aux;
}

int main(){
  int n1;
  int n2;

  printf("Digite o primeiro número: ");
  scanf("%d", &n1);
  
  printf("Digite o segundo número: ");
  scanf("%d", &n2);
  
  printf("MDC: %d\n", mdc(n1, n2));
}
