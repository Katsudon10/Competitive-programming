#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
const int inf = INT_MAX;
using ll = long long;
//fixed << setprecision(5)

int main(){
    int n,a,b;
    cin >> n >> a >> b;
    string s;
    cin >> s;
    int j=0,f=0;
    rep(i,s.size()){
        if(s[i]=='a' && j<a+b){
            cout << "Yes" << endl;
            j++;
        }else if(s[i]=='b' && j<a+b && f<b){
            cout << "Yes" << endl;
            j++;
            f++;
        }else{
            cout << "No" << endl;
        }
    }
    return 0;
}