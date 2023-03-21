#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
const int inf = INT_MAX;
using ll = long long;
//fixed << setprecision(5)

int main(){
    int n,k,x,y;
    cin >> n >> k >> x >> y;
    int ans=0;
    rep(i,n){
        if(i<k){
            ans+=x;
        }else{
            ans+=y;
        }
    }
    cout << ans << endl;
    return 0;
}