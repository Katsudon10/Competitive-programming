#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
const int inf = INT_MAX;
using ll = long long;

int main(){
    int n;
    string s;
    cin >> n >> s;
    vector<int>w(n);
    rep(i,n) cin >> w[i];
    int amax=0;
    int anum=0,cnum=0;
    int cmin=inf;
    rep(i,n){
        if(s.at(i)=='0'){
            cmin=min(cmin,w[i]);
            anum++;
        }else{
            amax=max(amax,w[i]);
            cnum++;
        }
    }
    if(amax==cmin){
        if(anum>cnum)
    }
    return 0;
}