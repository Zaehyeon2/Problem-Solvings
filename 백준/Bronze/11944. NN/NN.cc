#include <string>
#include <iostream>
#include <cstdio>
#include <string>

using namespace std;

int main(int argc, char const *argv[]) {
    int N, M;
    cin >> N >> M;
    string anss;
    for (size_t i = 0; i < N; i++) {
        anss += to_string(N);
    }
    if (anss.size() < M){
        printf("%s\n",anss.c_str() );
    }
    else{
        for (size_t i = 0; i < M; i++) {
            printf("%c", anss[i]);
        }
    }
    return 0;
}
