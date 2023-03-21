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
    vector<string>s(n);
    vector<int>t(n);
    rep(i,n)cin >> s[i] >> t[i];
    vector<int>x(n+1,0);
    for(int i=1;i<=n;i++)x[i]=x[i-1]+t[i-1];
    string X;
    cin >> X;
    for(int i=1;i<=n;i++){
        if(X==s[i-1]){
            cout << x[n]-x[i] << endl;
            return 0;
        }
    }
    return 0;
}