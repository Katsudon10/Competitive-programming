#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
const int inf = INT_MAX;
using ll = long long;
//fixed << setprecision(10)

int main(){
    int x,n;
    cin >> x >> n;
    set<int>p;
    rep(i,n){
        int s;
        cin >> s;
        p.insert(s);
    }
    int ans;
    int d=inf;
    rep(i,103){
        if(!p.count(i)){
            if(d>abs(x-i)){
                d=abs(x-i);
                ans=i;
            }
        }
    }
    cout << ans << endl;
    return 0;
}