#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
const int inf = INT_MAX;
using ll = long long;
//fixed << setprecision(5)

int main(){
    vector<int>n(3);
    rep(i,3)cin >> n[i];
    vector<int>ans(3);
    ans=n;
    sort(ans.rbegin(),ans.rend());
    rep(i,3)rep(j,3){
        if(n[i]==ans[j])cout << j+1 << endl;
    }
    return 0;
}