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
    int num=0;
    rep(i,n){
        if(s[i]=='"'){
            num++;
        }
        if(num%2==0 && s[i]==','){
            cout << '.';
        }else{
            cout << s[i];
        }
    }
    return 0;
}