#include <cstdio>
#include <vector>
#include <string>
#include <iostream>
#include <algorithm>

using namespace std;

int main(){
  int N,M,count=0;
  scanf("%d %d",&N,&M);
  vector<string> v(N+M);
  vector<string> v2;
  for(int i=0;i<N+M;i++) cin >> v[i];
  sort(v.begin(),v.end());
  for(int i=0;i<N+M-1;i++){
    if(v[i]==v[i+1]){
      v2.push_back(v[i]);
      count++;
    }
  }
  printf("%d\n",count);
  for(int i=0;i<count;i++)
    printf("%s\n",v2[i].c_str());
}
