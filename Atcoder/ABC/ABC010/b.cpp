#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
const int inf = INT_MAX;
using ll = long long;
//fixed << setprecision(10)

int main(){
    int n;
    cin >> n;
    int ans=0;
    rep(i,n){
        int a;
        cin >> a;
        bool flag=true;
        while(flag){
            if(a%2==0 || a%3==2){
                a--;
                ans++;
            }else{
                flag=false;
            }
        }
    }
    cout << ans << endl;
    return 0;
}