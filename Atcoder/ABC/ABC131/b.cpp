#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
const int inf = INT_MAX;
using ll = long long;
//fixed << setprecision(5)

int main(){
    int n,l;
    cin >> n >> l;
    int ans=0,eat=inf;
    for(int i=l;i<n+l;i++){
        ans+=i;
        if(abs(eat)>abs(i))eat=i;
    }
    cout << ans-eat << endl;
    return 0;
}