#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
const int inf = INT_MAX;
using ll = long long;
//fixed << setprecision(5)

int main(){
    ll n,t;
    cin >> n >> t;
    vector<ll>a(n);
    
    ll alltime=0;
    rep(i,n){
        cin >> a[i];
        alltime+=a[i];
    } 
    t=t%alltime;
    ll time=0;
    rep(i,n){
        time+=a[i];
        if(time>t){
            cout << i+1 << ' ' << a[i]-time+t << endl;
            return 0;
        }
    }
    return 0;
}