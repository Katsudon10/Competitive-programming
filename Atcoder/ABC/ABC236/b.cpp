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
    rep(i,4*n-1){
        int a;
        cin >> a;
        A[a-1]++;
    }
    rep(i,n){
        if(A[i]==3){
            cout << i+1 << endl;
            return 0;
        }
    }
    return 0;
}