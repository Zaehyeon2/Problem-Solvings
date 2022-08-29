#include <cstdio>
#include <string>
#include <iostream>
#include <deque>

using namespace std;

int main(){
  int N;
  scanf("%d",&N);
  deque<int> dq;
  for(int i=0;i<N;i++){
    string s;
    cin >> s;
    if(s == "push_front"){
      int X;
      scanf("%d",&X);
      dq.push_front(X);
    }
    if(s == "push_back"){
      int X;
      scanf("%d",&X);
      dq.push_back(X);
    }
    if(s == "pop_front"){
      if(dq.size()){
        printf("%d\n",dq.front());
        dq.pop_front();
      }
      else
        printf("-1\n");
    }
    if(s == "pop_back"){
      if(dq.size()){
        printf("%d\n",dq.back());
        dq.pop_back();
      }
      else
        printf("-1\n");
    }
    if(s == "size")
      printf("%lu\n",dq.size());
    if(s == "empty"){
      printf("%d\n",dq.empty() ? 1 : 0 );
    }
    if(s == "front"){
      printf("%d\n",dq.empty() ? -1 : dq.front());
    }
    if(s == "back"){
      printf("%d\n",dq.empty() ? -1 : dq.back());
    }
  }
}