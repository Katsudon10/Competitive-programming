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
    int n,x;
    cin >> n >> x;
    vector<int>a(n-1);
    rep(i,n-1)cin >> a[i];
    sort(ALL(a));
    int cnt=0;
    rep(i,n-1)cnt+=a[i];
    
    int ans=0;
    if(x>cnt-a.front()){
        ans=-1;
    }else if(cnt-a.back()>=x){
        ans=0;
    }else{
        ans=x-(cnt-a.back()-a.front());
    }
    cout << ans << endl;
    return 0;
}