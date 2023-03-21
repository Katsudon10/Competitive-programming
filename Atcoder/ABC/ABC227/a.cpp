#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
const int inf = INT_MAX;
using ll = long long;
//fixed << setprecision(5)

int main(){
    int n,k,a;
    cin >> n >> k >> a;
    int ans=(a+k-1)%n;
    if(ans==0){
        ans=n;
    }
    cout << ans << endl;
    return 0;
}