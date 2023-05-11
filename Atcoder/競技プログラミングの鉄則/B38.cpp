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

int main(){
    int n;
    string s;
    cin >> n >> s;
    vector<int>r1(n),r2(n);

    int s1=1;
    r1[0]=1;
    rep(i,n-1){
        if(s[i]=='A')s1++;
        if(s[i]=='B')s1=1;
        r1[i+1]=s1;
    }

    int s2=1;
    r2[n-1]=1;
    for(int i=n-2;i>=0;i--){
        if(s[i]=='A')s2=1;
        if(s[i]=='B')s2++;
        r2[i]=s2;
    }

    ll ans=0;
    rep(i,n){
        ans+=max(r1[i],r2[i]);
    }
    cout << ans << endl;
    return 0;
}