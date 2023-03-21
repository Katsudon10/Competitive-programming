#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
const int inf = INT_MAX;
using ll = long long;
//fixed << setprecision(10)

int main(){
    ll k;
    cin >> k;
    string s;
    while(k>0){
        s+=k%2+'0';
        k/=2;
    }
    string ans;
    for(int i=s.size()-1;i>=0;i--){
        if(s[i]=='1'){
            ans+='2';
        }else{
            ans+='0';
        }
    }
    cout << ans << endl;
    return 0;
}