#include<cstdio>
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

bool iscons(string &a, string &b){
   int smaller =0;
   int uncons = 0;
   a.size() > b.size() ? smaller = b.size() : smaller = a.size();
   for(int i=0; i<smaller ;i++){
      if(a[i] == b[i]) uncons++;
   }
   if(uncons==smaller) return true; //무적권 No ;
   else return false;//yes 가능성;
    
}

int main(){
    int t; cin >> t;
    vector <string> cons; 
    for(int i=0; i<t; i++){
        cons.clear();
        int n; cin >> n;
        for(int j=0; j<n; j++){
            string s; cin >> s;
            cons.push_back(s);
        }
        sort(cons.begin(), cons.end());
        int C=0;
        for(int k=0; k<cons.size()-1;k++){
            if(iscons(cons[k], cons[k+1]) == true) C++;         
        }
        if(C==0) cout << "YES" << '\n';
        else cout << "NO" << '\n';
    }
   
}