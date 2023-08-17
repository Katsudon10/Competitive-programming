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
    
    vector<bool>flag(n,false);

    rep(i,m){
        int a,b;
        cin >> a >> b;
        a--;b--;
        flag[b]=true;
    }

    vector<int>winner;
    rep(i,n)if(!flag[i])winner.push_back(i+1);
    
    if(winner.size()==1)cout << winner[0] << endl;
    else cout << -1 << endl;
    return 0;
}