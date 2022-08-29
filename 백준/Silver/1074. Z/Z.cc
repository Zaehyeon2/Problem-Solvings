#include <cstdio>
#include <cmath>


int main() {
  int N, r, c, cnt = 0;
  scanf("%d %d %d", &N, &r, &c);
  int N2 = pow(2, N);
  int Nr = N2, Nc = N2;
  while(1){
    if (r >= Nr / 2) {
      cnt += Nc * (Nr / 2);
      r -= Nr / 2;
    }
    if (c >= Nc / 2){
      cnt += (Nc / 2) * (Nr / 2);
      c -= Nc / 2;
    }
    Nr /= 2;
    Nc /= 2;
    if (Nr == 1 && Nc == 1){
      break;
    }
  }
  printf("%d\n", cnt);





}
