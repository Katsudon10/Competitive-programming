#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
const int inf = INT_MAX;
using ll = long long;
//fixed << setprecision(5)

int main(){
    string s;
    int n;
    cin >> n >> s;
    if(s[n-1]=='o'){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }
    return 0;
}