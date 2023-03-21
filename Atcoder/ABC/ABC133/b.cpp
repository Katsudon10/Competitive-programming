#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
const int inf = INT_MAX;
using ll = long long;
//fixed << setprecision(10)

int main(){
    int n,d;
    cin >> n >> d;
    vector<vector<int>>X(n,vector<int>(d));
    rep(i,n)rep(j,d)cin >> X[i][j];
    int ans=0;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            int num=0;
            for(int k=0;k<d;k++){
                int diff=abs(X[i][k]-X[j][k]);
                num+=diff*diff;
            }
            rep(i,num+1){
                if(num==i*i)ans++;
            }
        }
    }
    cout << ans << endl;
    return 0;
}