#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
const int inf = INT_MAX;
using ll = long long;
//fixed << setprecision(10)

int main(){
    vector<ll>n(4);
    rep(i,4)cin >> n[i];
    sort(n.begin(),n.end());
    if(n[0]+n[3]==n[1]+n[2] || n[0]+n[1]+n[2]==n[3]){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }
    return 0;
}