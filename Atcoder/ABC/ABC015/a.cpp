#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
const int inf = INT_MAX;
using ll = long long;
//fixed << setprecision(5)

int main(){
    string s1,s2;
    cin >> s1 >> s2;
    if(s1.size()>s2.size()){
        cout << s1 << endl;
    }else{
        cout << s2 << endl;
    }
    return 0;
}