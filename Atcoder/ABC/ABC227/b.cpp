#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
const int inf = INT_MAX;
using ll = long long;
//fixed << setprecision(10)

int main(){
    int n;
    cin >> n;
    vector<int>s(n);
    rep(i,n) cin >> s[i];
    int ans=0;
    rep(i,n){
        bool flag=false;
        for(int a=1;a<=1000;a++){
            for(int b=1;b<=1000;b++){
                if(4*a*b+3*a+3*b==s[i])flag=true;
            }
        }
        if(flag)ans++;
    }
    cout << n-ans << endl;
    return 0;
}