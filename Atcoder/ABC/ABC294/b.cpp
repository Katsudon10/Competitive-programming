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
    int h,w;
    cin >> h >> w;
    rep(i,h){
        rep(j,w){
            int a;
            cin >> a;
            if(a==0)cout << '.';
            else cout << char('A'+(a-1)); 
        }
        cout << endl;
    }
    return 0;
}