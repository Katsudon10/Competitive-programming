#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
const int inf = INT_MAX;
using ll = long long;
//fixed << setprecision(5)

int main(){
    int n,x;
    cin >> n >> x;
    int ans=1,num=0; 
    rep(i,n){
        int l;
        cin >> l;
        num+=l;
        if(num<=x)ans++;
    }
    cout << ans << endl;
    return 0;
}