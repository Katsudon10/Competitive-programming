#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
const int inf = INT_MAX;
using ll = long long;
//fixed << setprecision(5)

int main(){
    ll n,m,t;
    cin >> n >> m >> t;
    vector<int>a(n);
    vector<vector<int>>xy(n,vector<int>(2));
    rep(i,n-1) cin >> a[i];
    rep(i,m){
        int x,y;
        cin >> x >> y;
        xy[x-1][0]=1;
        xy[x-1][1]=y;
    } 
    rep(i,n){
        if(xy[i][0]) t+=xy[i][1];
        if(t-a[i]<=0){
            cout << "No" << endl;
            return 0;
        }
        t-=a[i];
        
    }
    cout << "Yes" << endl;
    return 0;
}