#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
const int inf = INT_MAX;
using ll = long long;
//fixed << setprecision(10)

int main(){
    int n,k,m;
    cin >> n >> k >> m;
    vector<int>a(n);
    int score=0;
    rep(i,n-1){
        int a;
        cin >> a;
        score+=a;
    }
    if(score+k>=n*m){
        cout << max(0,n*m-score) << endl;
    }else{
        cout << -1 << endl;
    }
    return 0;
}