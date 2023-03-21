#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
const int inf = INT_MAX;
using ll = long long;
//fixed << setprecision(5)

int main(){
    int n;
    cin >> n;
    vector<vector<int>>p(n,vector<int>(2));
    rep(i,n) cin >> p[i][0] >> p[i][1];
    int ans=0;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(abs(p[i][1]-p[j][1])<=abs(p[i][0]-p[j][0])) ans++;
        }
    }
    cout << ans << endl;
    return 0;
}