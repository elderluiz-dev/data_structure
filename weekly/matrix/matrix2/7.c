#include <stdio.h>

int main(){
  int m[10][10];
  int prod = 1;
  
  for(int i = 0; i < 10; i++){
    for(int j = 0; j < 10; j++){
      scanf("%d", &m[i][j]);
    }
  }
  
  for(int i = 0; i < 10; i++){
    for(int j = 0; j < 10; j++){
      if(i > j){
        prod = prod * m[i][j];
      }
    }
  }
  
  printf("%d", prod);
  
}
