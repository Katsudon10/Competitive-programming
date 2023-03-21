#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
const int inf = INT_MAX;
using ll = long long;
//fixed << setprecision(5)

int main(){
    string s,t;
    cin >> s >> t;
    if(s==t.substr(0,s.size())){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }
    return 0;
}