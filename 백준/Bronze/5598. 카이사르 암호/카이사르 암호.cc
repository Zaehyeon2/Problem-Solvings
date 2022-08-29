#include <string>
#include <iostream>
#include <cstdio>

using namespace std;

int main(int argc, char const *argv[]) {
    string Si,ans;
    cin >> Si;
    int Sn = Si.size();
    for (int i = 0; i < Sn; i++) {
        if (Si[i] < 'D' ) {
            ans += Si[i] + ('X' - 'A');
        }
        else {
            ans += Si[i] - 3;
        }

    }
    printf("%s\n", ans.c_str());
    return 0;
}
