#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
const int inf = INT_MAX;
using ll = long long;
//fixed << setprecision(10)

int main(){
    vector<int>d(5);
    rep(i,5)cin >> d[i];
    sort(d.begin(),d.end());
    int ans=inf;
    do{
        int num=0;
        rep(i,5){
            while(num%10!=0)num++;
            num+=d[i];
        }
        ans=min(ans,num);
    }while(next_permutation(d.begin(),d.end()));
    cout << ans << endl;
    return 0;
}