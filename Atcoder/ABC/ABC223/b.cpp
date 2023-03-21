#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
const int inf = INT_MAX;
using ll = long long;
//fixed << setprecision(10)

int main(){
    string s;
    cin >> s;
    vector<string>str;
    rep(i,s.size()){
        string v=s.substr(i,s.size()-i)+s.substr(0,i);
        str.push_back(v);
    }
    sort(str.begin(),str.end());
    cout << str[0] << endl;
    cout << str[s.size()-1] << endl;
    return 0;
}