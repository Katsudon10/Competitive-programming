#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
const int inf = INT_MAX;

int main(){
    int a,b;
    cin >> a >> b;
    int ans=0;
    rep(i,a+1)rep(j,b+1){
        if(ans<min(a,min(b,a^b))) ans=min(a,min(b,a^b));
    }
    cout << ans << endl;
    return 0;
}