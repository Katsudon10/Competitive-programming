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
    int n,k;
    cin >> n >> k;
    vector<int>A(n);
    rep(i,n)cin >> A[i];
    for (int i = k; i < n; i++)
    {
        if(A[i]>A[i-k]){
            cout << "Yes" << endl;
        }else{
            cout << "No" << endl;
        }
    }
    return 0;
}