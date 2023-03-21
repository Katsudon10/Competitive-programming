#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
const int inf = INT_MAX;
using ll = long long;

int main(){
    int n;
    cin >> n;
    vector<int>num(n);
    rep(i,n) cin >> num[i];
    int ans=0;
    int max_num=num[0];
    int bb=0;
    for(int i=1;i<n;i++){
        if(max_num>=num[i]){
            bb++;
        }else{
            bb=0;
        }
        ans=max(ans,bb);
        max_num=num[i];
    }
    cout << ans << endl;
    return 0;
}