#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
const int inf = INT_MAX;
using ll = long long;
//fixed << setprecision(5)

int main(){
    string a,b,c;
    cin >> a >> b >> c;
    if(a[a.size()-1]==b[0] && b[b.size()-1]==c[0]){
        cout << "YES" << endl;
    }else{
        cout << "NO" << endl;
    }
    return 0;
}