#include <stdio.h>

int main(){
  int Number = 1;
  int Win_S = 0;
  int Win_N, sum;
  int s1,s2,s3,s4;
  for(int roop =  1;roop < 6;roop++){
    scanf("%d %d %d %d",&s1,&s2,&s3,&s4);
    sum = s1 + s2 + s3 + s4;
    if (Win_S < sum){
      Win_S = sum;
      Win_N = roop;
    }
  }
  printf("%d %d", Win_N, Win_S);
}
