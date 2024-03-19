#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
#define ALL(a)  (a).begin(),(a).end()
const int inf = INT_MAX;
using ll = long long;
using P = pair<int,int>;
struct Edge{
    int to;
    ll w;
    Edge(int to,ll w):to(to),w(w){}
};
using Graph = vector<vector<int>>;
using WeightedGraph = vector<vector<Edge>>;

vector<int>dxs={1,0,-1,0};
vector<int>dys={0,1,0,-1};

//fixed << setprecision(10)
//A[i].erase(unique(ALL(A[i])),A[i].end());

int main(){
    int q;
    cin >> q;
    deque<P>que;
    rep(i,q){
        int p;
        cin >> p;
        if(p==1){
            int x,c;
            cin >> x >> c;
            que.emplace_back(x,c);
        }else{
            int c;
            cin >> c;
            ll ans=0;
            while(c){
                int y=min(que.front().second,c);
                ans+=(ll)que.front().first*y;
                c-=y;
                que.front().second-=y;
                if(que.front().second==0)que.pop_front();
            }
            cout << ans << endl;
        }
    }
    return 0;
}