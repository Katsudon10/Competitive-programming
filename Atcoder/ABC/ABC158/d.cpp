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
    string s;
    cin >> s;
    int q;
    cin >> q;
    deque<char>deq;
    for(char c:s)deq.push_back(c);
    bool flag=true;
    rep(i,q){
        int t;
        cin >> t;
        if(t==1){
            flag=!flag;
        }else{
            int f;
            char c;
            cin >> f >> c;
            if(f==1 && flag){
                deq.push_front(c);
            }else if(f==1 && !flag){
                deq.push_back(c);
            }else if(f==2 && flag){
                deq.push_back(c);
            }else{
                deq.push_front(c);
            }
        }
    }
    if(!flag)reverse(ALL(deq));
    for(auto c:deq){
        cout << c;
    }
    cout << endl;
    return 0;
}