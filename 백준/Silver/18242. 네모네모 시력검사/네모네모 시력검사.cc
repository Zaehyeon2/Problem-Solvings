#include <bits/stdc++.h>

using namespace std;

char arr[101][101];



int main(){
    int N, M; cin >> N >> M;
    int lux , luy, rux, ruy, ldx, ldy, rdx, rdy;
    lux = luy = rux = ruy = ldx = ldy = rdx = rdy = -1;
    for(int i = 0; i < N; i++){
        cin >> arr[i];
    }
    for(int i = 0; i < N; i++){
        for(int j = 0; j < M; j++){
            if(lux == -1 && arr[i][j] == '#'){
                lux = j; luy = i;
            }
            else if(i == luy && arr[i][j] == '#' && arr[i+1][j] == '#'){
                ruy = i; rux = j;
            }
            else if(j == lux && arr[i][j] == '#' && arr[i][j+1] == '#'){
                ldx = j; ldy = i;
            }
            rdx = rux; rdy = ldy;
        }
    }
    // printf("%d %d\n%d %d\n%d %d\n%d %d\n", luy, lux, ruy, rux, ldy, ldx, rdy, rdx);
    int x, y;
    for(int i = luy; i <= ldy; i++){
        for(int j = lux; j <= rux; j++){
            if(i == luy || i == ldy || j == lux || j == rux){
                if(arr[i][j] == '.'){
                    y = i; x = j;
                }
            }
        }
    }
    // printf("%d %d\n", y, x);
    if(y == luy){
        printf("UP\n");
    }
    else if(x == lux){
        printf("LEFT\n");
    }
    else if(x == rux){
        printf("RIGHT\n");
    }
    else{
        printf("DOWN\n");
    }
}