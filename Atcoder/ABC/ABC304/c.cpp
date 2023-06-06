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
int n,d;

bool dis(int a,int b,vector<int> &x,vector<int> &y){
    int dx=x[a]-x[b];
    int dy=y[a]-y[b];
    return dx*dx+dy*dy<=d*d;
}

int main(){
    cin >> n >> d;
    vector<int>x(n),y(n);
    rep(i,n)cin >> x[i] >> y[i];

    queue<int>q;
    vector<bool>ans(n);
    ans[0]=true;
    q.push(0);

    while(!q.empty()){
        int v=q.front();
        q.pop();
        rep(i,n){
            if(dis(v,i,x,y)){
                if(ans[i])continue;
                ans[i]=true;
                q.push(i);
            }
        }
    }
    rep(i,n){
        if(ans[i])cout << "Yes" << endl;
        else cout << "No" << endl;
    }
    return 0;
}