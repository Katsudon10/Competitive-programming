#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
const int inf = INT_MAX;
using ll = long long;
//fixed << setprecision(5)

int main(){
    int n;
    cin >> n;
    set<string>s;
    vector<string>w(n);
    rep(i,n)cin >> w[i];
    s.insert(w[0]);
    for(int i=1;i<n;i++){
        if(w[i].front()!=w[i-1].back()){
            cout << "No" << endl;
            return 0;
        }
        if(s.find(w[i])!=s.end()){
            cout << "No" << endl;
            return 0;
        }else{
            s.insert(w[i]);
        }
    }
    cout << "Yes" << endl;
    return 0;
}