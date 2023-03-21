#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
const int inf = INT_MAX;
using ll = long long;
//fixed << setprecision(5)

int main(){
    char s,t;
    cin >> s >> t;
    if(s=='Y'){
        cout << char(t-32) << endl;
    }else{
        cout << t << endl;
    }
    return 0;
}