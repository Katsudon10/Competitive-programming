#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
const int inf = INT_MAX;
using ll = long long;
//fixed << setprecision(5)

int main(){
    int n;
    cin >> n;
    vector<int>a(n);
    rep(i,n) cin >> a[i];
    sort(a.begin(),a.end());
    bool flag=true;
    for(int i=0;i<n-1;i++){
        if(a[i]==a[i+1]) flag=false;
    }
    if(flag){
        cout << "YES" << endl;
    }else{
        cout << "NO" << endl;
    }
    return 0;
}