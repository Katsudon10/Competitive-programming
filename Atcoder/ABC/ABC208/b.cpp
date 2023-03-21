#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
const int inf = INT_MAX;
using ll = long long;
//fixed << setprecision(10)

int main(){
    vector<int>m(10,1);
    for(int i=1;i<10;i++)m[i]=m[i-1]*(i+1);
    int ans=0;
    int p;
    cin >> p;
    for(int i=9;i>=0;i--){
        ans+=p/m[i];
        p%=m[i];
    }
    cout << ans << endl;
    return 0;
}