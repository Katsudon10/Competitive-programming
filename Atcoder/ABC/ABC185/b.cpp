#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
const int inf = INT_MAX;
using ll = long long;
//fixed << setprecision(5)

int main(){
    int n,m,t;
    cin >> n >> m >> t;
    int num=n;
    vector<vector<int>>A(m,vector<int>(2));
    rep(i,m) cin >> A[i][0] >> A[i][1];
    rep(i,m){
        if(i==0){
            n-=A[i][0];
        }else{
            n-=A[i][0]-A[i-1][1];
        }
        if(n<=0){
            cout << "No" << endl;
            return 0;
        }else{
            n+=A[i][1]-A[i][0];
            n=min(n,num);
        }
    }
    n-=t-A[m-1][1];
    if(n<=0){
        cout << "No" << endl;
    }else{
        cout << "Yes" << endl;
    }
    
    return 0;
}