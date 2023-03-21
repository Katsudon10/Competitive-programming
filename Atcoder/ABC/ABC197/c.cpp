#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)

int main(){
    int n;
    cin >> n;
    vector<int>a(n);
    rep(i,n) cin >> a[i];
    int ans=1<<30;
    for(int bit=0;bit<(1<<(n-1));bit++){
        int num_or=0;
        int num_exor=0;
        for(int i=0;i<n;i++){
            num_or|=a[i];
            if(bit & (1<<i)){
                num_exor^=num_or;
                num_or=0;
            }
        }
        num_exor^=num_or;
        ans=min(ans,num_exor);
    }
    cout << ans << endl;
    return 0;
}