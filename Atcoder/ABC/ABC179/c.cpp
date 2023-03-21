#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
const int inf = INT_MAX;
using ll = long long;
//fixed << setprecision(10)

int main(){
    int n;
    cin >> n;
    int ans=0;
    for(int i=1;i<n;i++){
        for(int j=1;j<n;j++){
            for(int k=1;k<n;k++){
                if(i*j+k==n)ans++;
            }
        }
    }
    cout << ans << endl;
    return 0;
}