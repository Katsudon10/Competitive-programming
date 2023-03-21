#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
const int inf = INT_MAX;
using ll = long long;
//fixed << setprecision(5)

int main(){
    int n;
    cin >> n;
    string a,b,c;
    cin >> a >> b >> c;
    int ans=0;
    rep(i,n){
        if(a[i]==b[i] && b[i]==c[i]){
            ans+=0;
        }else if(a[i]==b[i] || b[i]==c[i] || a[i]==c[i]){
            ans+=1;
        }else{
            ans+=2;
        }
    }
    cout << ans << endl;
    return 0;
}