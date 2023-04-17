#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
#define ALL(a)  (a).begin(),(a).end()
const int inf = INT_MAX;
using ll = long long;
using P = pair<int,int>;
using Graph = vector<vector<int>>;

vector<int>dxs={1,0,-1,0};
vector<int>dys={0,1,0,-1};

//fixed << setprecision(10)

int main(){
    int n,q;
    cin >> n >> q;
    vector<int>A(n);
    rep(i,n)cin >> A[i];
    map<int,vector<int>>mp;
    rep(i,n){
        mp[A[i]].push_back(i+1);
    }
    rep(i,q){
        int x,k;
        cin >> x >> k;
        if(mp[x].size()>=k){
            cout << mp[x][k-1] << endl;
        }else{
            cout << -1 << endl;
        }
    }
    return 0;
}