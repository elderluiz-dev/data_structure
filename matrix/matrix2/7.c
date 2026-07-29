#include <stdio.h>

int main(){
  int m[3][3];
  int prod = 1;
  
  for(int i = 0; i < 3; i++){
    for(int j = 0; j < 3; j++){
      scanf("%d", &m[i][j]);
    }
  }
  
  for(int i = 0; i < 3; i++){
    for(int j = 0; j < 3; j++){
      if(i > j){
        prod = prod * m[i][j];
      }
    }
  }
  
  printf("%d", prod);
  
}
