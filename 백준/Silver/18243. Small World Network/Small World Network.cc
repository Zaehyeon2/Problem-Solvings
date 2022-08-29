#include <bits/stdc++.h>

using namespace std;

vector <vector<int> > node(101);

int chk[101];

void bfs(int n){
    int fn;
    queue <int> q;
    chk[n] = 0;
    q.push(n);
    while(!q.empty()){
        fn = q.front();
        q.pop();
        for(int i = 0; i < node[fn].size(); i++){
            if(chk[node[fn][i]] == -1){
                q.push(node[fn][i]);
                chk[node[fn][i]] = chk[fn] + 1;
            }
        }
    }
}

int main(){
    int N, K; cin >> N >> K;
    for(int i = 0; i < K; i++){
        int a, b; scanf("%d%d", &a, &b);
        node[a].push_back(b);
        node[b].push_back(a);
    }
    for(int i = 1; i <= N; i++){
        memset(chk, -1, sizeof(chk));
        bfs(i);
        for(int j = 1; j <= N; j++){
            if(chk[j] == -1 || chk[j] > 6){
                printf("Big World!\n");
                return 0;
            }
        }
    }
    printf("Small World!\n");
}