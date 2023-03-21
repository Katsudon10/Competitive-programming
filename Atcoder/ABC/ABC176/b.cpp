#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
const int inf = INT_MAX;
using ll = long long;
//fixed << setprecision(10)

int main(){
    string s;
    cin >> s;
    int n=0;
    for(ll i=0;i<s.size();i++){
        n+=s[i]-'0';
    }
    if(n%9==0){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }
    return 0;
}