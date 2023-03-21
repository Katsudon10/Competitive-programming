#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
const int inf = INT_MAX;
using ll = long long;
//fixed << setprecision(10)

int main(){
    int n;
    cin >> n;
    vector<int>r(n);
    rep(i,n)cin >> r[i];
    sort(r.rbegin(),r.rend());
    int rr=0;
    double pie=acos(-1);
    rep(i,n){
        if(i%2==0){
            rr+=r[i]*r[i];
        }else{
            rr-=r[i]*r[i];
        }
    }
    cout << fixed << setprecision(10) << rr*pie << endl;
    return 0;
}