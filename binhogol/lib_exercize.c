#include <stdio.h>
#include "binhogol.h"

void main(){
  int a;
  leiaInt(&a);
  imprimaInt(a);
  
  char b;
  leiaChar(&b);
  imprimaChar(b);

  float c;;
  leiaReal(&c);
  imprimaReal(c);
}
