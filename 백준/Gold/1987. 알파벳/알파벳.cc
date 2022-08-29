#include <cstdio>

char mat[21][21];
bool chk[26];
int ans;
int R, C;
int dir[4][2] = {{1,0},{-1,0},{0,1},{0,-1}};

void dfs(int sy, int sx,int s){
    if (s > ans) {
        ans = s;
    }
    for (int i = 0; i < 4; i++) {
        int y = sy + dir[i][0], x = sx + dir[i][1];
        if (y < 0 || y >= R || x < 0 || x >= C){
            continue;
        }
        if (chk[mat[y][x] - 'A'] == false){
            chk[mat[y][x] - 'A'] = true;
            dfs(y,x,s+1);
            chk[mat[y][x] - 'A'] = false;
        }
    }
}

int main() {
    scanf("%d %d", &R, &C);
    for (int i = 0; i < R; i++) {
        scanf("%s", mat[i]);
    }
    chk[mat[0][0] - 'A'] = true;
    dfs(0,0,1);
    printf("%d\n", ans);
    return 0;
}
