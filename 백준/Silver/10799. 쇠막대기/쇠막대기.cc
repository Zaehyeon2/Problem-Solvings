#include <stdio.h>
#include <string>
#include <iostream>
#include <stack>
using namespace std;

int main(){
  string s;
  int count = 0;
  stack<char> st;
  cin >> s;
  for(int i=0; i<s.length(); i++){
    if(s[i]=='('){
      st.push('(');
    }
    if(s[i]==')'){
      if(s[i+1] ==')'){
        count++;
      }
      st.pop();
      if(!st.empty() && s[i-1]=='('){
        count+=st.size();
      }
    }
  }
  printf("%d",count);
}