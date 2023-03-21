#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
const int inf = INT_MAX;
using ll = long long;
//fixed << setprecision(10)

int main(){
    int n;
    string s;
    cin >> n >> s;
    int ans=0,num=0;
    rep(i,n){
        if(s[i]=='I'){
            num++;
        }else{
            num--;
        }
        ans=max(ans,num);
    }
    cout << ans << endl;
    return 0;
}