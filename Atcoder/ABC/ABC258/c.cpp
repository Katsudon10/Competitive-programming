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
    int n,q;
    cin >> n >> q;
    string s;
    cin >> s;
    int cnt=0;
    rep(i,q){
        int t,x;
        cin >> t >> x;
        if(t==1){
            cnt-=x;
            cnt=(cnt+n)%n;
        }else{
            cout << s[(cnt-1+x+n)%n] << endl;
        }
    }
    return 0;
}