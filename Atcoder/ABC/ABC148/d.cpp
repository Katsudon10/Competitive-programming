#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
const int inf = INT_MAX;
using ll = long long;
//fixed << setprecision(10)

int main(){
    int n;
    cin >> n;
    vector<int>a(n);
    rep(i,n)cin >> a[i];
    int cnt=1;
    rep(i,n){
        if(a[i]==cnt)cnt++;
    }
    if(cnt==1){
        cout << -1 << endl;
    }else{
        cout << n-cnt+1 << endl;
    }
    return 0;
}