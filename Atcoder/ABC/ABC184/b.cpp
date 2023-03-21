#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
const int inf = INT_MAX;
using ll = long long;
//fixed << setprecision(5)

int main(){
    int n, x;
    string s;
    cin >> n >> x >> s;
    for(char c : s){
        if(c == 'o') x++;
        else if(x) x--;
    }
    cout << x << endl;    
    return 0;
}