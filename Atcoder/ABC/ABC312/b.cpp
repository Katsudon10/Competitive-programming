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

int n,m;
bool cheack(int i,int j,vector<string> &s){
    if(i+8<n && j+8<m){
        rep(k,3){
            rep(l,3){
                if(s[i+k][j+l]!='#')return false;
                if(s[i+k+6][j+l+6]!='#')return false;
            }
        }
        rep(k,3){
            if(s[i+3][j+k]!='.')return false;
            if(s[i+k][j+3]!='.')return false;
        }
        return true;
    }
    return false;
}

int main(){
    cin >> n >> m;
    vector<string>s(n);
    rep(i,n)cin >> s[i];
    rep(i,n){
        rep(j,m){
            if(cheack(i,j,s)){
                cout << i+1 << ' ' << j+1 << endl;
            }
        }
    }
    return 0;
}