#include <bits/stdc++.h>
#define mp(x, y) make_pair(x, y)

using namespace std;

int cryp[53];
int stcrpy[53];
string st;

int main(){
    int N; cin >> N;
    for(int i = 0; i < N; i++){
        int tmp; cin >> tmp;
        cryp[tmp]++;
    }
    getchar();
    getline(cin, st);
    int len = st.size();
    for(int i = 0; i < len; i++){
        if(st[i] == ' '){
            stcrpy[0]++;
        }
        else if('A' <= st[i] && st[i] <= 'Z'){
            stcrpy[st[i] - 'A' + 1]++;
        }
        else {
            stcrpy[st[i] - 'a' + 27]++;
        }
    }
    for(int i = 0; i <= 52; i++){
        if(stcrpy[i] != cryp[i]){
            printf("n\n");
            return 0;
        }
    }
    printf("y\n");
}