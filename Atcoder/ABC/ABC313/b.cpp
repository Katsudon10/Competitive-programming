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
    Graph G(n);
    rep(i,m){
        int a,b;
        cin >> a >> b;
        a--;b--;
        G[a].push_back(b);
    }

    rep(i,n){
        int cnt=0;
        queue<int>que;
        vector<bool>seen(n,false);
        que.push(i);
        seen[i]=true;
        while(!que.empty()){
            int q=que.front();
            seen[q]=true;
            cnt++;
            for(int v:G[q]){
                if(!seen[v])que.push(v);
                else{
                    cout << -1 << endl;
                    return 0;
                } 
            }
            que.pop();
        }
        if(cnt==n){
            cout << i+1 << endl;
            return 0;
        }
    }
    cout << -1 << endl;
    return 0;
}