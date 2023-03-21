#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
const int inf = INT_MAX;
using ll = long long;
//fixed << setprecision(5)

int main(){
    int n,k;
    cin >> n >> k;
    vector<int>P(n);
    rep(i,n){
        rep(j,3){
            int p;
            cin >> p;
            P[i]+=p;
        }
    }
    vector<int>q=P;
    sort(q.rbegin(),q.rend());
    int score=q[k-1];
    rep(i,n){
        if(P[i]+300>=score){
            cout << "Yes" << endl;
        }else{
            cout << "No" << endl;
        }
    }

    return 0;
}