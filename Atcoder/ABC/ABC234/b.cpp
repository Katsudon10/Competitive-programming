#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
const int inf = INT_MAX;
using ll = long long;
//fixed << setprecision(5)

int main(){
    int n;
    cin >> n;
    vector<vector<int>>A(n,vector<int>(2));
    rep(i,n) cin >> A[i][0] >> A[i][1];
    double ans=0;
    rep(i,n)rep(j,n){
        ans=max(ans,pow((A[i][0]-A[j][0]),2)+pow((A[i][1]-A[j][1]),2));
    }
    cout << fixed << setprecision(10) << sqrt(ans) << endl;
    return 0;
}