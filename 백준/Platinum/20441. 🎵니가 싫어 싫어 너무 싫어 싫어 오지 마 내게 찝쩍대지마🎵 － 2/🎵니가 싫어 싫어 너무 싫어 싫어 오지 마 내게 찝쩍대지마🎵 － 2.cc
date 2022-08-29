#include<bits/stdc++.h>
using namespace std;

int tree[4000000], cnt[4000000];

// Lazy Propagation
void update(int node, int begin, int end, int left, int right, int v){
    if(end < left || right < begin) return;
    if(left <= begin && end <= right) {
    	tree[node] += v;
	}
    else {
        int m = (begin + end)/2;
        update(node*2, begin, m, left, right, v);
        update(node*2+1, m+1, end, left, right, v);
    }
    cnt[node] = tree[node];
    if(begin < end) {
    	cnt[node] = tree[node] + max(cnt[node*2], cnt[node*2+1]);
	}
}

int main(){
    int len, n, ans=0;
    cin >> len >> n;
    
    vector < pair < pair <int, int>, pair <int, int> > > hole;
    
    while(n--){
        int y1, x1, y2, x2;
        cin >> y1 >> x1 >> y2 >> x2;
        // 애초에 스티커 붙일 수 없는 구멍은 없앰
        if(y2 - y1 > len || x2 - x1 > len) continue;
        
        y1 = y1+len-1;
        y2 = max(y2-1, len-1);
        x1 = x1+len-1;
        x2 = max(x2-1, len-1);
        
        // 1은 구멍의 시작, -1은 구멍의 끝
        hole.push_back({{y2, 1}, {x2, x1}});
        hole.push_back({{y1+1, -1}, {x2, x1}});
    }
    
    sort(hole.begin(), hole.end());
    
    for(int i = 0; i < hole.size(); i++){
        update(1, 0, 1000000, hole[i].second.first, hole[i].second.second, hole[i].first.second);
        ans = max(ans, cnt[1]);
    }
    
    cout << ans << '\n';
}