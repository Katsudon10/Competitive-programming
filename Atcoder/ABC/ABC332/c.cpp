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
    string s;
    cin >> n >> m >> s;
    int ans=0,cnt=0;
    int mm=m;
    rep(i,n){
        if(s[i]=='0'){
            ans=max(ans,cnt);
            cnt=0;
            mm=m;
        }else if(s[i]=='1'){
            if(mm==0)cnt++;
            else mm--;
        }else if(s[i]=='2'){
            cnt++;
        }
    }
    ans=max(ans,cnt);
    cout << ans << endl;
    return 0;
}