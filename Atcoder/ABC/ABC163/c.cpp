#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
const int inf = INT_MAX;
using ll = long long;
//fixed << setprecision(5)

int main(){
    int n;
    cin >> n;
    vector<int>A(n);
    rep(i,n-1){
        int a;
        cin >> a;
        A[a-1]++;
    }
    rep(i,n){
        cout << A[i] << endl;
    }
    return 0;
}