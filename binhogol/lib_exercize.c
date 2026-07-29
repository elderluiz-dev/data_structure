#include <stdio.h>
#include "binhogol.h"

int main(){
  int a;
  leiaInt(&a);
  imprimaInt(a);
  
  char b;
  leiaChar(&b);
  imprimaChar(b);

  float c;
  leiaReal(&c);
  imprimaReal(c);

  return 0;
}
