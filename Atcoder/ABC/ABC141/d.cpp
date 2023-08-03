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
    int n,m;
    cin >> n >> m;
    priority_queue<int>que;
    rep(i,n){
        int a;
        cin >> a;
        que.push(a);
    }
    
    rep(i,m){
        int q=que.top();
        que.pop();
        que.push(q/2);
    }

    ll ans=0;
    while(!que.empty()){
        ans+=que.top();
        que.pop();
    }
    cout << ans << endl;
    return 0;
}