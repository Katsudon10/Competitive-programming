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
    vector<int>F(n),S(n);
    vector<P>p(n);
    rep(i,n){
        cin >> F[i] >> S[i];
        p.push_back(make_pair(S[i],F[i]));
    }
    sort(p.rbegin(),p.rend());
    int v=p[0].second;
    int ans=-1;
    for(int i=1;i<n;i++){
        int temp=0;
        if(p[i].second==v){
            temp=p[0].first+p[i].first/2;
        }else{
            temp=p[0].first+p[i].first;
        }
        ans=max(ans,temp);
    }
    cout << ans << endl;
    return 0;
}