#include <bits/stdc++.h>

using namespace std;

int mp[201][201];

vector <int> tv;

int main(){
    int N, M; cin >> N >> M;
    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            cin >> mp[i][j];
        }
        mp[i][i] = 1;
    }
    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            for(int k = 0; k < N; k++){
                if(mp[i][j] == 1 && mp[j][k] == 1){
                    mp[i][k] = 1;
                    mp[k][i] = 1;
                }
            }
        }
    }
    // for(int i = 0; i < N; i++){
    //     for(int j = 0; j < N; j++){
    //         printf("%d ", mp[i][j]);
    //     }
    //     cout << endl;
    // }
    for(int i = 0; i < M; i++){
        int tmp; cin >> tmp;
        tv.push_back(tmp);
    }
    for(int i = 0; i < M-1; i++){
        if(mp[tv[i]-1][tv[i+1]-1] == 0){
            printf("NO\n");
            return 0;
        }
    }
    printf("YES\n");
}