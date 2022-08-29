#include <cstdio>
#include <stack>
#include <string.h>
#include <iostream>
#include "string"

using namespace std;

int main(){
  while(1){
    string inp;
    stack <char> small;
    getline(cin, inp);
    if (inp[0] == '.') break;
    int len = inp.size();
    for(int i = 0; i < len; i++){
      if(inp[i] == '(') {
        small.push('(');
      }
      if(inp[i] == ')') {
        if(small.size() != 0 && small.top() == '('){
          small.pop();
        }
        else{
          small.push(')');
        }
      }
      if(inp[i] == '[') {
        small.push('[');
      }
      if(inp[i] == ']') {
        if(small.size() != 0 && small.top() == '['){
          small.pop();
        }
        else{
          small.push(']');
        }
      }
    }
    if(small.empty()) printf("%s\n", "yes");
    else printf("%s\n", "no");
  }
}
