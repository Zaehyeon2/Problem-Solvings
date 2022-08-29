#include <bits/stdc++.h>

using namespace std;

int root[28];

vector <vector <int> > v(26);
vector <int> arrest;
vector <int> rootv;
int chk[26];

int ans;

void dfs(int a){
    if(!(find(arrest.begin(), arrest.end(), a) == arrest.end())){
        return;
    }
    for(int i = 0; i < v[a].size(); i++){
        if(chk[v[a][i]] == 0){
            chk[v[a][i]] = 1;
            dfs(v[a][i]);
            ans += 1;
        }
    }  
}

int main(){
    int N, M; cin >> N >> M;
    if(1 > N || N > 26 || 1 > M || M > 600) return -1;
    for(int i = 0; i < M; i++){
        char A, B; cin >> A >> B;
        v[A-'A'].push_back(B-'A');
        root[B-'A'] = 1;
    }
    for(int i = 0; i < N; i++){
        if(root[i] == 0){
            rootv.push_back(i);
        }
    }
    int K; cin >> K;
    while(K--){
        char A; cin >> A;
        arrest.push_back(A-'A');
        v[A-'A'].clear();
        chk[A-'A'] = 1;

    }
    for(int i = 0; i < rootv.size(); i++){
        dfs(rootv[i]);
    }
    printf("%d\n", ans);
}