#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
const int inf = INT_MAX;
using ll = long long;
//fixed << setprecision(5)

int main(){
    int n;
    cin >> n;
    set<char>S;
    rep(i,n){
        char s;
        cin >> s;
        S.insert(s);
    }
    if(S.size()==3){
        cout << "Three" << endl;
    }else{
        cout << "Four" << endl;
    }
    return 0;
}