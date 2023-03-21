#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
const int inf = INT_MAX;
using ll = long long;
//fixed << setprecision(5)

int main(){
    int n;
    cin >> n;
    int ans=0;
    vector<int>a(n);
    rep(i,n)cin >> a[i];
    bool flag=true;
    while(flag){
        rep(i,n){
            if(a[i]%2==0){
                a[i]/=2;
            }else{
                flag=false;
                cout << ans << endl;
                return 0;
            }
        }
        ans++;
    }

    return 0;
}