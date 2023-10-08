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
    vector<string>s(n);
    rep(i,n)cin >> s[i];
    vector<P>vp;
    vector<int>cnt(n);
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(s[i][j]=='o')cnt[i]++;
        }
    }
    rep(i,n)vp.push_back(make_pair(i+1,cnt[i]));
    sort(ALL(vp),[](P a,P b){
        if(a.second != b.second){
            return a.second > b.second;
        }else{
            return a.first < b.first;
        }
    });
    rep(i,n){
        cout << vp[i].first << endl;
    }
    return 0;
}