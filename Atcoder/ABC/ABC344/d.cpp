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
    string s;
    cin >> s;
    int n;
    cin >> n;
    vector<vector<string>>S(n);
    vector<int>a(n);
    map<string,int>mp;
    rep(i,n){
        cin >> a[i];
        rep(j,a[i])cin >> S[i];
    }

    int ans=-1;
    vector<vector<int>>dp(s.size(),vector<int>(s.size()),inf);
    
    rep(i,n){
        rep(j,a[i]){
            
        }
    }
    
    return 0;
}