#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
const int inf = INT_MAX;
using ll = long long;
//fixed << setprecision(5)

int main(){
    string s;
    cin >> s;
    if(s.back()=='s'){
        cout << s << "es" << endl;
    }else{
        cout << s <<'s' << endl;
    }
    return 0;
}