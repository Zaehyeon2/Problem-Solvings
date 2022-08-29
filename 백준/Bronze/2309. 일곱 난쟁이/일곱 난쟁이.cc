#include <stdio.h>
#include <algorithm>
using namespace std;

int main(){
  int A[10] = {}, sum = 0;
  for(int i = 0 ; i < 9 ; i ++){
    scanf("%d", &A[i]);
    sum += A[i];
  }
  int flag = 0;
  for(int i = 0 ; i < 8; i ++){
    for(int j = i + 1; j < 9; j ++){
      if(sum - A[i] - A[j] == 100){
        A[i] = 1000;
        A[j] = 1000;
        flag = 1;
        break;
      }
    }
    if(flag == 1) break;
  }
  sort(A, A+9);
  for(int i = 0; i < 7; i ++) printf("%d\n", A[i]);
}