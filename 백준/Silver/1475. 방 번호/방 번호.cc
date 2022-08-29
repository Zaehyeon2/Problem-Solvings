#include <cstdio>
#include <string>
#include <string.h>
#include <iostream>

using namespace std;

int arr[10];
char num[1000000];

int main() {
  cin >> num;
  int lenth = strlen(num);
  for(int i = 0; i < lenth; i++){
    if(num[i] == '9'){
      arr[6]++;
    }
    else{
      arr[num[i] - '0']++;
    }
  }
  int max = 0;
  for(int i = 0; i < 9; i++){
    if (i == 6) {
      if (arr[i] / 2 + arr[i] % 2 > max){
        max = arr[i] / 2 + arr[i] % 2;
      }
    }
    else {
      if (arr[i] > max){
        max = arr[i];
      }
    }
  }
  printf("%d\n", max);
}
