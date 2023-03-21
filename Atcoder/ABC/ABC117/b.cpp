#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
const int inf = INT_MAX;
using ll = long long;
//fixed << setprecision(10)

int main(){
    int n;
    cin >> n;
    vector<int>l(n);
    rep(i,n) cin >> l[i];
    sort(l.begin(),l.end());
    int s=0;
    rep(i,n-1) s+=l[i];
    if(s>l[n-1]){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }
    return 0;
}