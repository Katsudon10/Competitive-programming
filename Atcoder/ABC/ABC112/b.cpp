#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
const int inf = INT_MAX;
using ll = long long;

int main(){
    int N,T;
    int ans=inf;
    cin >> N >> T;
    rep(i,N){
        int c,t;
        cin >> c >> t;
        if(t<=T) ans=min(ans,c);
    }
    if(ans==inf){
        cout << "TLE" << endl;
    }else{
        cout << ans << endl;
    }
    return 0;
}