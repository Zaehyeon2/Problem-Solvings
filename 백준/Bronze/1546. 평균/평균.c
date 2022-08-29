#include <stdio.h>

int main(){
  int N;
  float A[1000] ={};
  float sum = 0;
  int Max = 0;
  scanf("%d", &N);
  for (int i = 0; i < N; i++){
    scanf("%f", &A[i]);
    if (A[i] > Max){
      Max = A[i];
    }
  }
  for (int i = 0; i < N; i++){
    sum += A[i]/Max*100;
  }
  printf("%.2f\n", sum/N);
}
