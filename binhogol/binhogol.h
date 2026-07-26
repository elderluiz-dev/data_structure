#include <stdio.h>

// INTEIROS
void leiaInt(int *var){
  scanf("%d", var);
}
void imprimaInt(int var){
  printf("%d\n", var);
}

// REAIS
void leiaReal(float *var){
  scanf("%f", var);
}
void imprimaReal(float var){
  printf("%2.f\n", var);
}

// CARACTERES
void leiaChar(char *var){
  scanf("%c", var);
}
void imprimaChar(char var){
  printf("%c\n", var);
}
