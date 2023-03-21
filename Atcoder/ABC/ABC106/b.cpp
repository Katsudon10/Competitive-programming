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
    for(int i=1;i<=n;i++){
        int num=0;
        if(i%2==1){
            for(int j=1;j<=i;j++){
                if(i%j==0)num++;
            }
        }
        
        if(num==8) ans++;
    }
    cout << ans << endl;
    return 0;
}