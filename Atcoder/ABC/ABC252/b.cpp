#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
const int inf = INT_MAX;

int main(){
    int n,k;
    cin >> n >> k;
    vector<int>A(n),B(k);
    rep(i,n) cin >> A[i];
    rep(i,k) cin >> B[i];
    int max_num=0;
    rep(i,n) max_num=max(max_num,A[i]);
    rep(i,k){
        if(A[B[i]-1]==max_num){
            cout << "Yes" << endl;
            return 0;
        }
    }
    
    cout << "No" << endl;
    
    return 0;
}