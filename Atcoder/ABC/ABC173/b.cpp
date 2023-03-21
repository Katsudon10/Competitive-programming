#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
const int inf = INT_MAX;
using ll = long long;
//fixed << setprecision(10)

int main(){
    int n;
    cin >> n;
    int ans[4]={0};
    rep(i,n){
        string s;
        cin >> s;
        if(s=="AC")ans[0]++;
        if(s=="WA")ans[1]++;
        if(s=="TLE")ans[2]++;
        if(s=="RE")ans[3]++;
    }
    cout << "AC x " << ans[0] << endl;
    cout << "WA x " << ans[1] << endl;
    cout << "TLE x " << ans[2] << endl;
    cout << "RE x " << ans[3] << endl;
    return 0;
}