#include <bits/stdc++.h>

using namespace std;

int arr[10000001];

vector <pair<int, int> > v;

int main(){
    int N, K; cin >> N >> K;
    if (N == 2){
        printf("YES\n");
        printf("swap 1 2\n");
        printf("swap 1 2\n");
        printf("swap 1 2\n");
        printf("swap 1 2\n");
        printf("swap 1 2\n");
        return 0;
    }
    else if(N == 3){
        printf("NO\n");
        return 0;

    }
    else if (K == 1){
        printf("YES\n");
        printf("swap 1 %d\n", N);
        printf("reverse 2 %d\n", N-1);
        printf("reverse 1 %d\n", N-1);
        printf("reverse 1 %d\n", N);
        printf("reverse 1 %d\n", N);
        return 0;
    }
    else if(K == N-1){
        printf("YES\n");
        printf("swap %d %d\n", N-1, N);
        printf("reverse 1 %d\n", N-1);
        printf("reverse 2 %d\n", N-1);
        printf("reverse 1 %d\n", N);
        printf("reverse 1 %d\n", N);
        return 0;
    }
    else {
        printf("YES\n");
        printf("reverse 1 %d\n", K);
        printf("reverse %d %d\n", K+1, N);
        printf("reverse 1 %d\n", N);
        printf("reverse 1 %d\n", N);
        printf("reverse 1 %d\n", N);
    }
}
//     int tmp = K+1;
//     for(int i = 0; i < N; i++){
//         if(tmp == N+1) tmp = 1;
//         arr[i] = tmp++;
//     }
//     for(int i = 0; i < K/2; i++){
//         int tmp = arr[i];
//         arr[i] = arr[K-i-1];
//         arr[K-i-1] = tmp;
//         v.push_back(make_pair(i+1, K-i));
//     }
//     for(int i = 0; i < (N-K)/2; i++){
//         int tmp = arr[K+i];
//         arr[K+i] = arr[N-1-i];
//         arr[N-1-i] = tmp;
//         v.push_back(make_pair(K+i+1, N-i));
//     }
//     if(v.size() >= 5 || v.size() % 2 == 1){
//         printf("NO\n");
//         return 0;
//     }
//     else{
//         printf("YES\n");
//         for(int i = 0; i < 5; i++){
//             if(i < v.size()){
//                 printf("swap %d %d\n", v[i].first, v[i].second);
//             }
//             else {
//                 printf("reverse %d %d\n", 1, N);
//             }
//         }
//     }
// }

