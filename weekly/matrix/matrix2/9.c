#include <stdio.h>

int main(){
  int m[10][10];
  
  for(int i = 0; i < 10; i++){
    for(int j = 0; j < 10; j++){
      scanf("%d", &m[i][j]);
    }
  }
  
  for(int i = 0; i < 10; i++){
    for(int j = 0; j < 10; j++){
      if((i + j) != (10 - 1)){
        printf("%d", m[i][j]);
      }
    }
  }
  
}
