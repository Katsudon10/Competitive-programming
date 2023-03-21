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
    for(int i=1;i<=n;i++){
        int num10=i,num8=i;
        bool flag=true;
        while(num10!=0 || num8!=0){
            if(num10%10==7 || num8%8==7)flag=false;
            num10/=10;
            num8/=8;
        }
        if(flag)ans++;
    }
    cout << ans << endl;
    return 0;
}