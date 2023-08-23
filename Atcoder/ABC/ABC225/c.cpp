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
    cin >> n >> m;
    vector<vector<int>>B(n,vector<int>(m));
    rep(i,n)rep(j,m)cin >> B[i][j];
    rep(i,n)rep(j,m){
        if(i+1<n && B[i][j]+7!=B[i+1][j]){
            cout << "No" << endl;
            return 0;
        }
        if(j+1<m && B[i][j]+1!=B[i][j+1]){
            cout << "No" << endl;
            return 0;
        }
        if(i!=0 && j+1<m && B[i][j+1]%7==1){
            cout << "No" << endl;
            return 0;
        }
    }
    cout << "Yes" << endl;
    return 0;
}