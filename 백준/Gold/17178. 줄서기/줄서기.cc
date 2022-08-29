#include <bits/stdc++.h>
#define mp(x, y) make_pair(x, y)

using namespace std;

vector<pair<char, int> > order;
stack<pair<char, int> > w;
queue<pair<char, int> > fst;

int main(){
    int N; cin >> N;
    int od = 0;
    for(int i = 0; i < N*5; i++){
        string inp; cin >> inp;
        string tmp = "";
        for(int j = 2; j < inp.size(); j++){
            tmp += inp[j];
        }
        order.push_back(mp(inp[0], stoi(tmp)));
        fst.push(mp(inp[0], stoi(tmp)));
    }
    sort(order.begin(), order.end());
    while(!fst.empty()){
        if(fst.size() != 0 && fst.front() == order[od]){
            fst.pop();
            od++;
        }
        else if(w.size() != 0 && w.top() == order[od]){
            w.pop();
            od++;
        }
        else{
            w.push(fst.front());
            fst.pop();
        }
    }
    while(!w.empty()){
        if(w.top() == order[od]){
            w.pop();
            od++;
        }
        else{
            break;
        }
    }
    if(w.empty()){
        printf("GOOD\n");
    }
    else {
        printf("BAD\n");
    }
}