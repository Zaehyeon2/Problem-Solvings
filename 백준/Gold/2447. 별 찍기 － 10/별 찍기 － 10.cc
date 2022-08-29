#include <cstdio>

bool ans[2200][2200];

void star(int y, int x, int size){
  if (size == 1){
    ans[y][x] = 1;
    return;
  }
  size /= 3;
  for(int i = 0; i < 3; i++){
    for(int j = 0; j < 3; j++){
      if ((i * j) % 2) continue;
      star(x + size * i, y + size * j, size);
    }
  }
}

int main() {
  int N; scanf("%d", &N);
  star(0, 0, N);
  for(int i = 0; i < N; i++){
    for(int j = 0; j < N; j++){
      if(ans[i][j] == 1){
        printf("*");
      }
      else printf(" ");
    }
    printf("\n");
  }
}
