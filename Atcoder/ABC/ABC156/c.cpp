#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
const int inf = INT_MAX;
using ll = long long;
//fixed << setprecision(5)

int main(){
    int n;
    cin >> n;
    vector<int>x(n);
    rep(i,n) cin >> x[i];
    int ans=inf;
    sort(x.begin(),x.end());
    for(int i=1;i<=x[n-1];i++){
        int sum=0;
        rep(j,n){
            sum+=(x[j]-i)*(x[j]-i);
        }
        if(ans>sum)swap(ans,sum);
    }
    cout << ans << endl;
    return 0;
}