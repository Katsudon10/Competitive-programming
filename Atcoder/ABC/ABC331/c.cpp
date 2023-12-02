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
    int n;
    cin >> n;
    vector<int>a(n);
    rep(i,n)cin >> a[i];
    vector<int>sa(n);
    sa=a;
    sort(ALL(sa));
    vector<ll>sumA(n+1);
    sumA[0]=0;
    for(int i=1;i<n;i++)sumA[i+1]=sumA[i]+sa[i];
    rep(i,n){
        int pos=upper_bound(ALL(sa),a[i])-sa.begin();
        cout << sumA[n]-sumA[pos] << ' ';
    }
    cout << endl;
    return 0;
}