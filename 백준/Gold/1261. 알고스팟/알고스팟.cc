#include <bits/stdc++.h>

using namespace std;

int maze[101][101];
int chk[101][101];

int dir[4][2] = {{0,1},{0,-1},{1,0},{-1,0}};

int N, M;

void bfs(){
    queue <pair<int, int> > q;
    q.push(make_pair(0, 0));
    chk[0][0] = 0;
    while(!q.empty()){
        int fy = q.front().first, fx = q.front().second;
        q.pop();
        for(int i = 0; i < 4; i++){
            int yy = fy + dir[i][0], xx = fx + dir[i][1];
            if(yy >= N || yy < 0 || xx >= M || xx < 0) continue;
            if(maze[yy][xx] == 0 ){
                if(chk[yy][xx] > chk[fy][fx]){
                    q.push(make_pair(yy, xx));
                    chk[yy][xx] = chk[fy][fx];
                }
            }
            else {
                if(chk[yy][xx] > chk[fy][fx] + 1){
                    q.push(make_pair(yy, xx));
                    chk[yy][xx] = chk[fy][fx] + 1;
                }
            }
        }
    }
}

int main(){
    cin >> M >> N;
    for(int i = 0; i < N; i++){
        for(int j = 0; j < M; j++){
            scanf("%1d", &maze[i][j]);
            chk[i][j] = 987654321;
        }
    }
    
    bfs();
    // for(int i = 0; i < N; i++){
    //     for(int j = 0; j < M; j++){
    //         printf("%d ", chk[i][j]);
    //     }
    //     cout << endl;
    // }
    printf("%d\n", chk[N-1][M-1]);
}