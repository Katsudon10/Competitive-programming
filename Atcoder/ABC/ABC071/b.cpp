#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
const int inf = INT_MAX;
using ll = long long;
//fixed << setprecision(5)

int main(){
    string s;
    cin >> s;
    sort(s.begin(),s.end());
    set<char>c;
    rep(i,s.size())c.insert(s[i]);
    rep(i,26){
        if(c.find(char('a'+i))==c.end()){
            cout << char('a'+i) << endl;
            return 0;
        }
    }
    cout << "None" << endl;
    return 0;
}