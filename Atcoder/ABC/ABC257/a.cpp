#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
const int inf = INT_MAX;
using ll = long long;

int main(){
    int n,x;
    cin >> n >> x;
    vector<char>s;
    rep(i,26){
        rep(j,n){
            s.push_back('A'+i);
        }
    }
    cout << s[x-1] << endl;
    return 0;
}