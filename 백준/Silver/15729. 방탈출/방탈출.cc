#include <cstdio>
#include <iostream>

bool sw[1000005];
int N;
int cnt = 0;

void swit(int idx) {
  if(idx < N)
    sw[idx] = !sw[idx];
}

int main() {
  scanf("%d", &N);
  for(int i = 0; i < N; i++){
    std::cin >> sw[i];
  }

  for(int i = 0; i < N; i++) {
    if(sw[i] != 0) {
      cnt++;
      swit(i); swit(i+1); swit(i+2);
    }
  }
  printf("%d\n", cnt);


}
