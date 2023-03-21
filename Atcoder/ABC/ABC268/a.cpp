#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
const int inf = INT_MAX;
using ll = long long;
//fixed << setprecision(5)

int main(){
    int a,b,c,d,e;
    cin >> a >> b >> c >> d >> e;
    set<int>s;
    s.insert(a);
    s.insert(b);
    s.insert(c);
    s.insert(d);
    s.insert(e);
    cout << s.size() << endl;
    return 0;
}