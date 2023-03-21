#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
const int inf = INT_MAX/2;

int main(){
    int n,m,x;
    cin >> n >> m >> x;
    vector<int>c(n);
    vector<vector<int>>a(n,vector<int>(m));
    rep(i,n){
        cin >> c[i];
        rep(j,m){
            cin >> a[i][j];
        }
    }
    int money=inf;
    
    for(int bit=0;bit<(1<<n);bit++){
        vector<int>tmp(m);
        int tmp_money=0;
        for(int i=0;i<n;i++){
            if(bit & (1<<i)){
                tmp_money+=c[i];
                rep(j,m){
                    tmp[j]+=a[i][j];
                }
            }
            bool flag=true;
            rep(k,m){
                if(tmp[k]<x) flag=false;
            }
            if(flag) money=min(money,tmp_money);
        }
    }
    if(money==inf) money=-1;
    cout << money << endl;
    return 0;
}