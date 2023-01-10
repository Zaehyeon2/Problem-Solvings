#include <cstdio>

int main(){
  int N; scanf("%d", &N);
  if (!(N % 2)) printf("%s\n", "I LOVE CBNU");
  else {
    for(int i = 0; i < N - N / 2 + 1; i++){
      for(int j = 0; j < N; j++){
        if (i == 0) printf("%s", "*");
        else{
          if ( j == N / 2  + i ) break;
          if(j == N / 2 + (i - 1) || j == N / 2 - (i - 1)) printf("%s", "*");
          else printf("%s", " ");
        }
      }
      printf("\n");
    }
  }
}
