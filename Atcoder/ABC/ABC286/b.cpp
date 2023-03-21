#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
const int inf = INT_MAX;
using ll = long long;
//fixed << setprecision(10)

int main(){
    int n;
    cin >> n;
    string s;
    cin >> s;
    string ans;
    rep(i,n){
        if(s[i]=='n' && s[i+1]=='a'){
            ans+="nya";
            i++;
        }else{
            ans+=s[i];
        }
    }
    cout << ans << endl;
    return 0;
}