#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
const int inf = INT_MAX;
using ll = long long;
//fixed << setprecision(10)

int main(){
    int t;
    cin >> t;
    
    rep(i,t){
        int ans=0;
        int n;
        cin >> n;
        rep(i,n){
            int a;
            cin >> a;
            if(a%2==1)ans++;
        }
        cout << ans << endl;
    }
    return 0;
}