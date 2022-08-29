#include <cstdio>
#include <algorithm>

using namespace std;

int N, histo[100001];

long long foo(int left, int right) {
    if (left == right) {
        return histo[left];
    }
    int mid = (left + right) / 2;
    long long ret = max(foo(left, mid), foo (mid + 1, right));
    int hei = min(histo[mid], histo[mid + 1]);
    ret = max(ret, (long long)hei * 2);
    int l = mid, r = mid + 1;
    while(!(l == left && r == right)) {
        if ( (r < right) && (l == left || histo[l - 1] <= histo[r + 1])) {
            r++;
            hei = min(hei,histo[r]);
        }
        else if ((left < l) && (r == right || histo[l - 1] > histo[r + 1])) {
            l--;
            hei = min(hei,histo[l]);
        }
        ret = max(ret, (long long)hei * (r - l + 1));
    }
    return ret;
}

int main(){
    int N;
    while(1){
        scanf("%d", &N);
        if ( N == 0 ) {
            break;
        }
        for ( int i = 0; i < N; i++ ){
            scanf("%d", &histo[i]);
        }
        printf("%lld\n",foo(0,N-1) );
    }
}
