#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
const int inf = INT_MAX;
using ll = long long;
//fixed << setprecision(5)

int main(){
    int k;
    cin >> k;
    string s;
    cin >> s;
    if(s.size()<=k){
        cout << s << endl;
    }else{
        cout << s.substr(0,k) + "..." << endl;
    }
    return 0;
}