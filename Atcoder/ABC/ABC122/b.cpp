#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
const int inf = INT_MAX;
using ll = long long;
//fixed << setprecision(5)

int main(){
    string s;
    cin >> s;
    int ans=0,num=0;
    rep(i,s.size()){
        if(s.at(i)=='A' || s.at(i)=='C' || s.at(i)=='G' || s.at(i)=='T'){
            num++;
        }else{
            ans=max(ans,num);
            num=0;
        }
    }
    ans=max(ans,num);
    cout << ans << endl;
    return 0;
}