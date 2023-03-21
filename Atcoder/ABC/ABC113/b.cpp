#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
const int inf = INT_MAX;
using ll = long long;
//fixed << setprecision(10)

int main(){
    int n;
    double t,a;
    cin >> n >> t >> a;
    double dif=inf;
    int ans=0;
    rep(i,n){
        int h;
        cin >> h;
        double T=t-h*0.006;
        double d=abs(a-T);
        if(dif>d)dif=d,ans=i+1;
    }
    cout << ans << endl;
    return 0;
}