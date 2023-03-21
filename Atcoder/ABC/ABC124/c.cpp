#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
const int inf = INT_MAX;
using ll = long long;
//fixed << setprecision(5)

int main(){
    string s;
    cin >> s;
    int ans1=0,ans2=0;
    rep(i,s.size()){
        if(i%2==0 && s[i]=='0'){
            ans1++;
        }else if(i%2==1 && s[i]=='1'){
            ans1++;
        }
        if(i%2==0 && s[i]=='1'){
            ans2++;
        }else if(i%2==1 && s[i]=='0'){
            ans2++;
        }
    }
    cout << min(ans1,ans2) << endl;
    return 0;
}