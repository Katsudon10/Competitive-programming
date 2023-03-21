#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
const int inf = INT_MAX;
using ll = long long;
//fixed << setprecision(5)

int main(){
    int n;
    cin >> n;
    vector<int>w(n);

    int num=0;
    rep(i,n){
        cin >> w[i];
        num+=w[i];
    } 

    int ans=inf;
    int ans_num=0;
    rep(i,n-1){
        ans_num+=w[i];
        ans=min(ans,abs(ans_num-(num-ans_num)));
    }
    cout << ans << endl;
    return 0;
}