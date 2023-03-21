#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
const int inf = INT_MAX;
using ll = long long;
//fixed << setprecision(10)

int main(){
    int n,x;
    cin >> n >> x;
    int ans=0;
    rep(i,n){
        int a;
        cin >> a;
        if(i%2==1)a--;
        ans+=a;
    }
    if(ans<=x){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }
    return 0;
}