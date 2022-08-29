#include <stack>
#include "iostream"
#include <cstdio>
#include <string>

using namespace std;

stack <char> front;
stack <char> back;
char tmp;

string ans;


int main() {
    int N; cin >> N;
    while (N--) {
        string inp; cin >> inp; int inpsize = inp.length();
        for (int i = 0; i < inpsize; i++) {
            if (inp[i] == '<') {
                if (front.size() > 0){
                    tmp = front.top();
                    front.pop();
                    back.push(tmp);
                }
            }
            else if (inp[i] == '>'){
                if (back.size() > 0){
                    tmp = back.top();
                    back.pop();
                    front.push(tmp);
                }
            }
            else if (inp[i] == '-'){
                if (front.size() > 0){
                    front.pop();
                }
            }
            else {
                front.push(inp[i]);
            }
        }
        while (front.size()) {
            ans += front.top();
            front.pop();
        }
        for (int i = 0; i < ans.size(); i++) {
            printf("%c", ans[ans.size()-i-1]);
        }
        while (back.size()) {
            printf("%c", back.top());
            back.pop();
        }
        printf("\n");
        ans = "";
    }
    return 0;
}
