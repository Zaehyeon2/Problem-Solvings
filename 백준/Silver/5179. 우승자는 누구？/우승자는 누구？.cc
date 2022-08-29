#include <bits/stdc++.h>

using namespace std;

int chk[501][11];

vector <pair<pair<int, int>, int> > score;

int main(){
    int K; cin >> K;
    for(int k = 1; k <= K; k++){
        int M, N, P; cin >> M >> N >> P;
        for(int i = 1; i <= P; i++){
            score.push_back(make_pair(make_pair(0, 0), i));
        }
        for(int i = 0; i < N; i++){
            int p, t, j; char m; cin >> p >> m >> t >> j;
            if(j == 0 && chk[p][m-'A'] != -1){
                chk[p][m-'A'] += 20;
            }
            if(j == 1 && chk[p][m-'A'] != -1){
                score[p-1].first.first -= 1;
                score[p-1].first.second += t + chk[p][m-'A'];
                chk[p][m-'A'] = -1;
            }
        }
        sort(score.begin(), score.end());
        printf("Data Set %d:\n", k);
        for(int i = 0; i < P; i++){
            printf("%d %d %d\n", score[i].second, -score[i].first.first, score[i].first.second);
        }
        score.clear();
        memset(chk, 0, sizeof(chk));
        if(k != K){
            printf("\n");
        }
    }

}