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

stack<int>st;

bool dfs(Graph &G,int n,vector<bool> &seen){
    st.push(n);
    seen[n]=true;
    for(int v:G[n]){
        if(seen[v]){
            return true;
        }else{
            dfs(G,v,seen);
        }
    }
    return false;
}

int main(){
    int n;
    cin >> n;
    Graph G(n+1);
    for(int i=1;i<=n;i++){
        int a;
        cin >> a;
        G[i].push_back(a);
    }

    vector<bool>seen(n+1,false);
    for(int i=1;i<=n;i++){
        if(!seen[i]){
            bool flag=dfs(G,i,seen);
            cout << flag << endl;
            if(flag)break;
        }
    }


    vector<int>ans;
    while(!st.empty()){
        ans.push_back(st.top());
        st.pop();
    }
    reverse(ALL(ans));
    cout << ans.size() << endl;
    for(int v:ans)cout << v << ' ';
    return 0;
}