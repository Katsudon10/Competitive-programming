#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
const int inf = INT_MAX;
using ll = long long;
//fixed << setprecision(10)

int main(){
    int n;
    string s;
    cin >> n >> s;
    for(char c:s){
        int x=c-'A';
        x=(x+n)%('Z'-'A'+1);
        cout << char(x+'A');
    }
    return 0;
}