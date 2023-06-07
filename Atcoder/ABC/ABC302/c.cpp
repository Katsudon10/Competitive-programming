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
    int n,m;
    cin >> n >> m;
    vector<string>s(n);
    rep(i,n)cin >> s[i];
    sort(ALL(s));
    do{
        bool flag=true;
        rep(i,n-1){
            int d=0;
            rep(j,m){
                if(s[i][j]!=s[i+1][j])d++;
            }
            if(d!=1)flag=false;
        }
        if(flag){
            cout << "Yes" << endl;
            return 0;
        }
    }while (next_permutation(ALL(s)));
    cout << "No" << endl;
    return 0;
}