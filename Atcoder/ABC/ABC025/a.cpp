#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
const int inf = INT_MAX;
using ll = long long;
//fixed << setprecision(5)

int main(){
    string s;
    int n;
    cin >> s >> n;
    vector<string>str;
    rep(i,5)rep(j,5){
        str.push_back(s.substr(i,1)+s.substr(j,1));
    }
    cout << str[n-1] << endl;
    return 0;
}