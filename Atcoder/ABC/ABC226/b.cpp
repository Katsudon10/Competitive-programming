#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
const int inf = INT_MAX;
using ll = long long;
//fixed << setprecision(5)

int main(){
    int n;
    cin >> n;
    set<vector<int>>L;
    rep(i,n){
        int l;
        cin >> l;
        vector<int>a(l);
        rep(j,l)cin >> a[j];
        L.insert(a);
    }
    cout << L.size() << endl;
    return 0;
}