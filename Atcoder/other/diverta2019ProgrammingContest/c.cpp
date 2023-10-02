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
    int na=0,nb=0,nab=0,anb=0;
    rep(i,n){
        string s;
        cin >> s;
        if(s.back()=='A' && s.front()=='B')anb++;
        else if(s.back()=='A')na++;
        else if(s.front()=='B')nb++;
        rep(i,s.size()-1){
            if(s[i]=='A' && s[i+1]=='B')nab++;
        }
    }
    int ans=0;
    if(anb==0)ans=nab+min(na,nb);
    else if(na+nb>0) ans=nab+anb+min(na,nb);
    else ans=nab+anb-1;
    cout << ans << endl;
    return 0;
}