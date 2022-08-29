#include <bits/stdc++.h>

using namespace std;

stack <char> lt;
stack <char> rt;

char aa[300004];

string reset(){
    string ret = "";
    while(!lt.empty()){
        ret = lt.top() + ret;
        lt.pop();
    } 
    while(!rt.empty()){
        ret += rt.top();
        rt.pop();
    }
    return ret;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int sum = 0;
    // ifstream fin;
    // fin.open("6.txt");
    string W, S, Wr; cin >> W >> S;
    Wr = W;
    int bl = 0;
    reverse(Wr.begin(), Wr.end());
    int N; cin >> N;
    int l = 0, r = S.size()-1;
    while(N--){
        char cmd;
        cin >> cmd;
        if (r < 0 || l > S.size()-1 || l > r) break;
        // printf("%d %d %d\n", N, l , r);
        if (cmd == 'L'){
            while(1){
                if(l > S.size()-1) break;
                if(l > r){
                    S = reset();
                    bl = 1;
                    break;
                }
                lt.push(S[l++]);
                if(lt.top() == Wr[0]){
                    string tmp = "";
                    for(int i = 0; i < Wr.size(); i++){
                        if(!lt.empty() && lt.top() == Wr[i]){
                            tmp += lt.top();
                            lt.pop();
                        }
                    }
                    if(tmp == Wr){
                        sum++;
                        break;
                    }
                    else {
                        for(int i = 0; i < tmp.size(); i++){
                            lt.push(tmp[tmp.size()-1-i]);
                        }
                    }
                }
            }
        }
        else if(cmd == 'R'){
            while(1){
                if(r < 0) break;
                if(l > r){
                    S = reset();
                    bl = 1;
                    break;
                }
                rt.push(S[r--]);
                if(rt.top() == W[0]){
                    string tmp = "";
                    for(int i = 0; i < W.size(); i++){
                        if(!rt.empty() && rt.top() == W[i]){
                            tmp += rt.top();
                            rt.pop();
                        }
                    }
                    if(tmp == W){
                        sum++;
                        break;
                    }
                    else{
                        for(int i = 0; i < tmp.size(); i++){
                            rt.push(tmp[tmp.size()-1-i]);
                        }
                    }
                }
            }
        }
        // printf("%d %d\n", l, r);
    }
    if(bl){
        N += 2;
        int sl = 0;
        stack <char> st;
        while(N--){
            if(sl >= S.size()) break;
            while(1){
                if(sl >= S.size()) break;
                st.push(S[sl++]);
                if(st.top() == Wr[0]){
                    string tmp = "";
                    for(int i = 0; i < Wr.size(); i++){
                        if(!st.empty() && st.top() == Wr[i]){
                            tmp += st.top();
                            st.pop();
                        }
                    }
                    if(tmp == Wr){
                        sum++;
                        break;
                    }
                    else {
                        for(int i = 0; i < tmp.size(); i++){
                            st.push(tmp[tmp.size()-1-i]);
                        }
                    }
                }
            }
        }
        cout << sum << ' ';
        stack <char> ans;
        while(!st.empty()){
            ans.push(st.top());
            st.pop();
        }
        while(!ans.empty()){
            cout << ans.top();
            ans.pop();
        }
        for(int i = sl; i < S.size(); i++){
            cout << S[i];
        }
        cout << '\n';
        if(sl >= S.size()-1){
            cout << "Perfect!\n";
        }
        else {
            cout << "You Lose!\n";
        }
    }
    else {
        int u = 0;
        stack <char> ans;
        cout << sum << '\n';
        while(!lt.empty()){
            ans.push(lt.top());
            lt.pop();
        }
        while(!ans.empty()){
            aa[u++] = ans.top();
            ans.pop();
        }
        for(int i = l; i <= r; i++){
            aa[u++] = S[i];
        }
        while(!rt.empty()){
            aa[u++] = rt.top();
            rt.pop();
        }
        aa[u] = '\0';
        string sans = string(aa);
        cout << sans <<'\n';
        if(sans.find(W) == string::npos){
            cout << "Perfect!\n";
        }
        else {
            cout << "You Lose!\n";
        }
    }
}