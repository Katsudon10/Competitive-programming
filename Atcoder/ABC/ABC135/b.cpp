#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
const int inf = INT_MAX;
using ll = long long;
//fixed << setprecision(5)

int main(){
    int n;
    cin >> n;
    vector<int>p(n),q(n);
    rep(i,n) cin >> p[i];
    q=p;
    sort(q.begin(),q.end());
    int s=0;
    rep(i,n){
        if(p[i]!=q[i]) s++;
    }
    if(s<=2){
        cout << "YES" << endl;
    }else{
        cout << "NO" << endl;
    }
    return 0;
}