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
    cin >> n;
    string s;
    cin >> s;
    double ans=0;
    rep(i,n){
        if(s[i]=='A')ans+=4;
        if(s[i]=='B')ans+=3;
        if(s[i]=='C')ans+=2;
        if(s[i]=='D')ans+=1;
        if(s[i]=='F')ans+=0;
    }
    cout << fixed << setprecision(10) << ans/n << endl;
    return 0;
}