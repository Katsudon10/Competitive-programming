#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
const int inf = INT_MAX;
using ll = long long;
//fixed << setprecision(10)

int main(){
    int n;
    cin >> n;
    double ans=0;
    rep(i,n){
        double x;
        string u;
        cin >> x >> u;
        if(u=="JPY"){
            ans+=x;
        }else{
            ans+=x*380000;
        }
    }
    cout <<  fixed << setprecision(10) << ans << endl;
    return 0;
}