#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
const int inf = INT_MAX;
using ll = long long;
//fixed << setprecision(10)

int main(){
    int s,t;
    cin >> s >> t;
    int ans=0;
    for(int i=0;i<=s;i++){
        for(int j=0;i+j<=s;j++){
            for(int k=0;i+j+k<=s;k++){
                if(i*j*k<=t)ans++;
            }
        }
    }
    cout << ans << endl;
    return 0;
}