#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
const int inf = INT_MAX;
using ll = long long;
//fixed << setprecision(5)

int main(){
    vector<int>num(3);
    rep(i,3) cin >> num[i];
    sort(num.rbegin(),num.rend());
    cout << num[0]+num[1] << endl;
    return 0;
}