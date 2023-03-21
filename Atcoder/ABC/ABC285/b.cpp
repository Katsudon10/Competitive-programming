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
    for(int i=1;i<n;i++){
        bool flag=false;
        rep(j,n){
            if(i+j<n){
                if(s[j]==s[j+i]){
                    cout << j << endl;
                    flag=true; 
                    break;
                }
            }
        }
        if(!flag)cout << n-i << endl;
    }
    return 0;
}