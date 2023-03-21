#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
const int inf = INT_MAX;
using ll = long long;
//fixed << setprecision(10)

int main(){
    string s;
    cin >> s;
    string ans;
    for(char c:s){
        if(c=='a' || c=='i' || c=='u' || c=='e' || c=='o'){
            continue;
        }else{
            ans+=c;
        }
    }
    cout << ans << endl;
    return 0;
}