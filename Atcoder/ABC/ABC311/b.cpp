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
    int n,d;
    cin >> n >> d;
    vector<string>s(n);
    rep(i,n)cin >> s[i];
    vector<int>cnt(d);
    rep(i,n){
        rep(j,d){
            if(s[i][j]=='o')cnt[j]++;
        }
    }
    vector<bool>flag(d,false);
    rep(i,d){
        if(cnt[i]==n)flag[i]=true;
    }

    int ans=0;
    int c=0;
    rep(i,d){
        if(flag[i]){
            c++;
        }else{
            ans=max(ans,c);
            c=0;
        } 
    }
    ans=max(ans,c);
    cout << ans << endl;
    return 0;
}