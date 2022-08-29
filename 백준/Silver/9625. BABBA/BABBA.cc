#include <cstdio>

int main() {
  int K; scanf("%d", &K);
  int A = 1; int B = 0;
  while(K--){
    int tmpA = A, tmpB = B;
    tmpA += B - A;
    tmpB += A;
    A = tmpA; B = tmpB;
  }
  printf("%d %d\n", A, B);
}
