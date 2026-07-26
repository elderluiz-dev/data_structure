#include <stdio.h>

int main(){
  int m[3][3] = {
    {0, 1, 1},
    {4, 0, 2},
    {3, 2, 0}
  };
  
  int b[3];
  int x = 0;
  int v[3];
  int y = 0;
  
  for(int i = 0; i < 3; i++){
    for(int j = 0; j < 3; j++){
      if(i > j){
        b[x] = m[i][j];
        x++;
      }
      if(i < j){
        v[y] = m[i][j];
        y++;
      }
    }
  }
  
  int bp = 0;
  int vp = 0;
  
  for(int i = 0; i < 3; i++){
    if(b[i] > v[i]){
      bp = bp + 3;
    }else if(v[i] > b[i]){
      vp = vp + 3;
    }else{
      bp++;
      vp++;
    }
  }
  
  printf("Bahia: %d | Vitória: %x\n", bp, vp);
  
  return 0;
}
