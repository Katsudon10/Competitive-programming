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
//A[i].erase(unique(ALL(A[i])),A[i].end());

int main(){
    int n,k;
    cin >> n >> k;
    vector<int>p(n);
    rep(i,n)cin >> p[i];
    
    priority_queue<int,vector<int>,greater<int>>q;
    rep(i,k-1)q.push(p[i]);
    for(int i=k-1;i<n;i++){
        q.push(p[i]);
        while(q.size()>k)q.pop();
        cout << q.top() << endl;
    }
    return 0;
}