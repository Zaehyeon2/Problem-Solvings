#include <cstdio>
#include <iostream>
#include <queue>

using namespace std;

queue <int> q;
queue <int> ans;

int main(int argc, char const *argv[]) {
    int N;
    cin >> N;
    for (int i = 1; i <= N; i++) {
        q.push(i);
    }
    while (!q.empty()){
        ans.push(q.front());
        q.pop();
        q.push(q.front());
        q.pop();
    }
    for (size_t i = 0; i < N; i++) {
        printf("%d ",ans.front());
        ans.pop();
    }
    printf("\n");
    return 0;
}
