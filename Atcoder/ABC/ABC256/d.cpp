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
    vector<P>p(n);
    rep(i,n)cin >> p[i].first >> p[i].second;
    sort(ALL(p));
    vector<P>ans;
    for(auto pa:p){
        if(ans.size()==0 || ans.back().second < pa.first){
            ans.emplace_back(pa.first,pa.second);
        }else{
            ans.back().second=max(ans.back().second,pa.second);
        }
    }
    for(auto pa:ans){
        cout << pa.first << ' ' << pa.second << endl;
    }
    return 0;
}