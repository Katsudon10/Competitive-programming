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
    int n;
    cin >> n;
    vector<int>c(n);
    vector<vector<int>>p(n);
    rep(i,n){
        cin >> c[i];
        p[i].resize(c[i]);
        rep(j,c[i]){
            cin >> p[i][j];
        }
    }

    vector<int>ans;
    queue<int>que;
    set<int>st;
    rep(i,c[0])que.push(p[0][i]);
    while(!que.empty()){
        int v=que.front();
        if(!st.count(v)){
            ans.push_back(v);
            st.insert(v);
        }
        que.pop();
        v--;
        rep(i,c[v])que.push(p[v][i]);
    }
    reverse(ALL(ans));
    for(int v:ans)cout << v << ' ';
    cout << endl;
    return 0;
}