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
    vector<int>A(3*n);
    rep(i,3*n)cin >> A[i];
    map<int,int>cnt;
    rep(i,3*n){
        cnt[A[i]]++;
        if(cnt[A[i]]==2)cout << A[i] << ' ';
    }
    cout << endl;
    return 0;
}