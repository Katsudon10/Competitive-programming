#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
const int inf = INT_MAX;
using ll = long long;
//fixed << setprecision(5)

int main(){
    int n;
    cin >> n;
    vector<int>a(n);
    int m=0;
    rep(i,n){
        cin >> a[i];
        m=max(m,a[i]);
    }
    int ans=0;
    int ans_num=2;
    
    for(int i=2;i<=m;i++){
        int num=0;
        rep(j,n){
            if(a[j]%i==0)num++;
        }
        if(num>ans) ans_num=i,ans=num;
    }
    cout << ans_num << endl;
    return 0;
}