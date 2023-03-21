#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
const int inf = INT_MAX;

int main(){
    int n,k;
    cin >> n >> k;
    vector<int>num(n);
    rep(i,n) cin >> num[i];
    int s=0;
    rep(i,k) s+=num[i];
    int score=s+1;
    

    vector<vector<int>>dp(n,vector<int>(n));

    return 0;
}