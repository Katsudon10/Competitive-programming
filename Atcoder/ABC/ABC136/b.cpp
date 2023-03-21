#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
const int inf = INT_MAX;
using ll = long long;
//fixed << setprecision(10)

int main(){
    int s;
    cin >> s;
    int ans=0;
    for(int i=1;i<=s;i++){
        string s=to_string(i);
        if(s.size()%2==1)ans++;
    }
    cout << ans << endl;
    return 0;
}