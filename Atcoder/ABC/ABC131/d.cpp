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
    vector<P>task;
    rep(i,n){
        int a,b;
        cin >> a >> b;
        task.emplace_back(b,a);
    }
    sort(ALL(task));
    int time=0;
    bool ans=true;
    rep(i,n){
        time+=task[i].second;
        if(time>task[i].first)ans=false;
    }
    if(ans)cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}