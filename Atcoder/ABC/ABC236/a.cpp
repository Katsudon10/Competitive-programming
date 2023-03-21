#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
const int inf = INT_MAX;
using ll = long long;
//fixed << setprecision(5)

int main(){
    string s;
    int a,b;
    cin >> s >> a >> b;
    char tmp=s.at(a-1);
    s.at(a-1)=s.at(b-1);
    s.at(b-1)=tmp;
    cout << s << endl;
    return 0;
}