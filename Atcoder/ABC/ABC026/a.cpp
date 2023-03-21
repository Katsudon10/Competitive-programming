#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
const int inf = INT_MAX;
using ll = long long;
//fixed << setprecision(5)

int main(){
    int a;
    cin >> a;
    int ans=0;
    rep(i,a){
        for(int j=1;j<=a-i;j++){
            if(ans<i*j) ans=i*j;
        }
    }
    cout << ans << endl;
    return 0;
}