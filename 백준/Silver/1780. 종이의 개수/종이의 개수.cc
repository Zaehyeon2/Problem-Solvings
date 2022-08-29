#include <bits/stdc++.h>

using namespace std;

int paper[2200][2200];

int ans[3];

int ischk(int y, int x, int size){
    int tmp = paper[y][x];
    for(int i = y; i < y+size; i++){
        for(int j = x; j < x+size; j++){
            if(tmp != paper[i][j]){
                return -2;
            }
        }
    }
    return tmp;
}

void dq(int y, int x, int size){
    if(ischk(y, x, size) != -2){
        ans[ischk(y, x, size)+1]++;
        return;
    }
    dq(y, x, size/3);
    dq(y, x+size/3, size/3);
    dq(y, x+2*size/3, size/3);
    dq(y+size/3, x, size/3);
    dq(y+size/3, x+size/3, size/3);
    dq(y+size/3, x+2*size/3, size/3);
    dq(y+2*size/3, x, size/3);
    dq(y+2*size/3, x+size/3, size/3);
    dq(y+2*size/3, x+2*size/3, size/3);
}

int main(){
    int N; cin >> N;
    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            cin >> paper[i][j];
        }
    }
    dq(0, 0, N);
    printf("%d\n%d\n%d\n", ans[0], ans[1], ans[2]);
}