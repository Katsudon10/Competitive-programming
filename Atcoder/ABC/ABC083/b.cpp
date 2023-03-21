#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
const int inf = INT_MAX;
using ll = long long;
//fixed << setprecision(5)

int main(){
    int n,a,b;
    cin >> n >> a >> b;
    int ans=0;
    rep(i,n+1){
        int num=i;
        int c=0;
        rep(i,5){
            c+=num%10;
            num/=10;
        }
        if(c>=a && c<=b)ans+=i;
    }
    cout << ans << endl;
    return 0;
}