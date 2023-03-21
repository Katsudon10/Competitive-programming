#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
const int inf = INT_MAX;
using ll = long long;
//fixed << setprecision(10)

int main(){
    int n,k,q;
    cin >> n >> k >> q;
    vector<int>a(n,k);
    rep(i,q){
        int A;
        cin >> A;
        a[A-1]++;
    }
    rep(i,n){
        if(a[i]-q>0){
            cout << "Yes" << endl;
        }else{
            cout << "No" << endl;
        }
    }
    return 0;
}