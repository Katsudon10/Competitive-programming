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
    int n;
    cin >> n;
    vector<int>A(n);
    rep(i,n)cin >> A[i];
    vector<bool>seen(n,false);
    rep(i,n){
        if(!seen[i])seen[A[i]-1]=true;
    }
    int num=0;
    rep(i,n){
        if(!seen[i])num++;
    }
    cout << num << endl;
    rep(i,n){
        if(!seen[i])cout << i+1 << ' ';
    }
    cout << endl;
    return 0;
}