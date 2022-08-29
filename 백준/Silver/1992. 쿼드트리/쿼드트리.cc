#include <cstdio>

int arr[65][65];

bool chk(int x, int y, int size){
  int tmp = arr[x][y];
  for (int i = x; i < x + size; i++){
    for (int j = y; j < y + size; j++){
      if (tmp != arr[i][j]) return 0;
    }
  }
  return 1;
}

void quad(int x, int y, int size){
  if(chk(x, y, size)) {
    printf("%d", arr[x][y]);
    return;
  }
  size /= 2;
  printf("%s", "(");
  quad(x, y, size);
  quad(x, y + size, size);
  quad(x + size, y, size);
  quad(x + size, y + size, size);
  printf("%s", ")");
}

int main(){
  int N; scanf("%d", &N);
  for(int i = 0; i < N; i++){
    for(int j = 0; j < N; j++){
      scanf("%1d", &arr[i][j]);
    }
  }
  quad(0, 0, N);
  printf("\n");
}
