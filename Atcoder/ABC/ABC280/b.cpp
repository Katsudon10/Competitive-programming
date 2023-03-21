#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
const int inf = INT_MAX;
using ll = long long;
//fixed << setprecision(5)

int main(){
    int n;
    cin >> n;
    vector<int>s(n);
    rep(i,n) cin >> s[i];
    vector<int>nu(n);
    int num=0;
    nu[0]=s[0];
    num=s[0];

    for(int i=1;i<n;i++){
        nu[i]=s[i]-num;
        num+=nu[i];
    }
    rep(i,n){
        if(i!=0)cout << ' ';
        cout << nu[i];
    }
    return 0;
}