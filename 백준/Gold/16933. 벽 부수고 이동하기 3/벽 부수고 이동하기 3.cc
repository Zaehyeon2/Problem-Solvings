#include <bits/stdc++.h>
#define mp(y, x, k, d, w) make_pair(make_pair(y, x), make_pair(w ,make_pair(k, d)))
#define qy first.first
#define qx first.second
#define qk second.second.first
#define ds second.second.second
#define dy second.first

using namespace std;

int arr[1001][1001];
int check[1001][1001][11][2];
bool bl = 0;

int N, M, K, dir[4][2] = {{1, 0}, {-1, 0}, {0, 1}, {0, -1}};

int bfs(int y, int x){
    queue <pair<pair<int, int>, pair<bool, pair<int, int> > > > q;
    q.push(mp(y, x, K, 1, true));
    check[y][x][K][1] = 1;
    while(!q.empty()){
        int fy = q.front().qy, fx = q.front().qx, fk = q.front().qk, dt = q.front().ds;
        bool day = q.front().dy;
        q.pop();
        if(fy == N - 1 && fx == M - 1){
            bl = 1;
            return dt;
        }
        for(int i = 0; i < 4; i++){
            int yy = fy + dir[i][0], xx = fx + dir[i][1];
            if(yy < 0 || yy >= N || xx < 0 || xx >= M) continue;
            if(!day){
                if(arr[yy][xx] == 1 && check[fy][fx][fk][!day] == 0){
                    check[fy][fx][fk][!day] = 1;
                    q.push(mp(fy, fx, fk, dt+1, !day));
                }
                else if(arr[yy][xx] == 0 && check[yy][xx][fk][!day] == 0){
                    check[yy][xx][fk][!day] = 1;
                    q.push(mp(yy, xx, fk, dt+1, !day));
                }
            } 
            else if(arr[yy][xx] == 1 && check[yy][xx][fk][!day] == 0){
                if(fk > 0){
                    check[yy][xx][fk][!day] = 1;
                    q.push(mp(yy, xx, fk-1, dt+1, !day));
                }
            }
            else if(arr[yy][xx] == 0 && check[yy][xx][fk][!day] == 0){
                check[yy][xx][fk][!day] = 1;
                q.push(mp(yy, xx, fk, dt+1, !day));
            }
        }
    }
}

int main(){
    cin >> N >> M >> K;
    for(int i = 0; i < N; i++){
        for(int j = 0; j < M; j++){
            scanf("%1d", &arr[i][j]);
        }
    }
    // bool a = false;
    // printf("%d", bl);
    int ans = bfs(0, 0);
    if(bl){
        printf("%d\n", ans);
    }
    else{
        cout << "-1\n";
    }  
}