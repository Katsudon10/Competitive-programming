#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
const int inf = INT_MAX;
using ll = long long;
//fixed << setprecision(5)

int main(){
    int a,b;
    cin >> a >> b;
    int ans=0;
    rep(i,2){
        ans+=max(a,b);
        if(a>b){
            a--;
        }else{
            b--;
        }
    }
    cout << ans << endl;
    return 0;
}