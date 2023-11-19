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
    string s;
    cin >> n >> s;
    vector<int>c(26,0);
    int cnt=0;
    rep(i,n){
        cnt++;
        if(s[i]!=s[i+1]){
            c[s[i]-'a']=max(c[s[i]-'a'],cnt);
            cnt=0;
        }
    }
    int ans=0;
    rep(i,26)ans+=c[i];
    cout << ans << endl;
    return 0;
}