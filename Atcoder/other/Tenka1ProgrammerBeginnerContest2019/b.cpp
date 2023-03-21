#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
const int inf = INT_MAX;
using ll = long long;
//fixed << setprecision(10)

int main(){
    int n,k;
    string s;
    cin >> n >> s >> k;
    char c=s[k-1];
    rep(i,n){
        if(s[i]==c){
            cout << s[i];
        }else{
            cout << '*';
        }
    }
    cout << endl;
    return 0;
}