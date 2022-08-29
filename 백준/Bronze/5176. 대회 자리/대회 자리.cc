#include <iostream>
#include <cstdio>

using namespace std;

int main(int argc, char const *argv[]) {
    int N;
    cin >> N;
    for (int i = 0; i < N; i++) {
        int P, M;
        bool arr[501] = {};
        cin >> P >> M;
        int ans = 0;
        for (int j = 0; j < P ; j++){
            int Pn;
            cin >> Pn;
            if (arr[Pn] == 0){
                arr[Pn] = 1;
            }
            else{
                ans++;
            }
        }
        printf("%d\n", ans);
    }
    return 0;
}
