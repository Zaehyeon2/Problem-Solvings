#include <iostream>
#include <cstdio>

using namespace std;

char Name[151][21];
int Num[200];


int main() {
  int N; scanf("%d", &N);
  for(int i = 0; i < N; i++){
    cin >> Name[i];
    Num[Name[i][0]]++;
  }
  int num = 0;
  for(int i = 'a'; i <= 'z'; i++){
    if (Num[i] >= 5){
      num++;
      printf("%c", i);
    }
  }
  if (num == 0){
    printf("PREDAJA");
  }
  printf("\n");
}
