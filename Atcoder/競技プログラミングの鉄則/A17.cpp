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
    vector<int>A(n),B(n);
    for(int i=1;i<n;i++)cin >> A[i];
    for(int i=2;i<n;i++)cin >> B[i];
    vector<int>dp(n);
    dp[0]=0;
    for(int i=1;i<n;i++){
        if(i==1){
            dp[i]=A[i];
        }else{
            dp[i]=min(dp[i-1]+A[i],dp[i-2]+B[i]);
        }
    }
    vector<int>ans;
    int p=n-1;
    while (true){
        ans.push_back(p);
        if(p==0)break;
        if(dp[p-1]+A[p]==dp[p]){
            p=p-1;
        }else{
            p=p-2;
        }
    }
    reverse(ALL(ans));
    cout << ans.size() << endl;
    for(int i:ans){
        cout << i+1 << ' ';
    }
    cout << endl;
    return 0;
}