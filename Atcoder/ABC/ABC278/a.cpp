#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
const int inf = INT_MAX;
using ll = long long;
//fixed << setprecision(5)

int main(){
    int n,k;
    cin >> n >> k;
    queue<int>a;
    rep(i,n){
        int A;
        cin >>A;
        a.push(A);
    }
    rep(i,k){
        a.pop();
        a.push(0);
    }
    rep(i,n){
        if(i!=0) cout << ' ';
        cout << a.front();
        a.pop();
    }
    return 0;
}