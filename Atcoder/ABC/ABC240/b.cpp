#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
const int inf = INT_MAX;
using ll = long long;
//fixed << setprecision(5)

int main(){
    int n;
    cin >> n;
    set<int>num;
    rep(i,n){
        int a;
        cin >> a;
        num.insert(a);
    }
    cout << num.size() << endl;
    return 0;
}