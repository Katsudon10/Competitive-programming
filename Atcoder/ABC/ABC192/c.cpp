#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
const int inf = INT_MAX;
using ll = long long;
//fixed << setprecision(5)

int main(){
    int k,c,d,e;
    string n,a,b;
    cin >> n >> k;
    for(int i=0;i<k;i++){
        sort(n.rbegin(),n.rend());
        a=n;
        sort(n.begin(),n.end());
        b=n;
        c=atoi(a.c_str());
        d=atoi(b.c_str());
        e=c-d;
        n=to_string(e);
    }
    cout << n << endl;
    return 0;
}