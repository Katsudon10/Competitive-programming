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
    vector<int>A(n+1);
    A[1]=1;
    A[2]=1;
    for(int i=3;i<=n;i++){
        A[i]=(A[i-1]+A[i-2])%1000000007;
    }
    cout << A[n] << endl;
    return 0;
}