#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
const int inf = INT_MAX;
using ll = long long;
//fixed << setprecision(10)

int main(){
    int n,m;
    cin >> n >> m;
    vector<int>s(n);
    rep(i,m){
        int a,b;
        cin >> a >> b;
        a--;b--;
        s[a]++;
        s[b]++;
    }
    rep(i,n){
        cout << s[i] << endl;
    }
    return 0;
}