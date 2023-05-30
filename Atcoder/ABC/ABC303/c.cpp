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
    int n,m,h,k;
    cin >> n >> m >> h >> k;
    string s;
    cin >> s;
    set<P>sp;
    rep(i,m){
        int x,y;
        cin >> x >> y;
        sp.insert(P(x,y));
    }
    int x=0,y=0;
    rep(i,n){
        h--;
        if(s[i]=='R')x++;
        if(s[i]=='L')x--;
        if(s[i]=='U')y++;
        if(s[i]=='D')y--;
        if(h<0){
            cout << "No" << endl;
            return 0;
        }
        if(h<k && sp.count(P(x,y))){
            h=k;
            sp.erase(P(x,y));
        }
    }
    cout << "Yes" << endl;
    return 0;
}