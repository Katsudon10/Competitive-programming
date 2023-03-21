#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
const int inf = INT_MAX;
using ll = long long;
//fixed << setprecision(5)

int main(){
    string s;
    cin >> s;
    int w;
    cin >> w;
    rep(i,s.size()){
        if(i%w==0){
            cout << s.at(i);
        }
    }
    cout << endl;
    return 0;
}