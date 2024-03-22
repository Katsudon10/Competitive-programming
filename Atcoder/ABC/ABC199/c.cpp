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
    int n,q;
    string s;
    cin >> n >> s >> q;
    int n2=2*n;
    bool flag=false;
    rep(i,q){
        int t,a,b;
        cin >> t >> a >> b;
        a--,b--;
        if(t==1){
            if(flag){
                a=(a+n)%n2;
                b=(b+n)%n2;
            }
            swap(s[a],s[b]);
        }else{
            flag=!flag;
        }
    }
    if(flag){
        string s1,s2;
        s1=s.substr(0,n);
        s2=s.substr(n);
        s=s2+s1;
    }
    cout << s << endl;
    return 0;
}