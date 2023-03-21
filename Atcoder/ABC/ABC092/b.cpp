#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
const int inf = INT_MAX;
using ll = long long;
//fixed << setprecision(5)

int main(){
    int n,d,x;
    cin >> n >> d >> x;
    int ans=x;
    rep(i,n){
        int a;
        int j=0;
        cin >> a;
        while(j*a+1<=d){
            ans++;
            j++;
        }
    }
    cout << ans << endl;
    return 0;
}