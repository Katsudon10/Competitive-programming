#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
const int inf = INT_MAX;
using ll = long long;
//fixed << setprecision(10)

int main(){
    int n;
    cin >> n;
    string s;
    cin >> s;
    if(n%2==0 && s.substr(0,n/2)==s.substr(n/2,n/2)){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }
    return 0;
}