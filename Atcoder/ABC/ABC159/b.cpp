#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
const int inf = INT_MAX;
using ll = long long;
//fixed << setprecision(5)

int main(){
    string s;
    cin >> s;
    int n=s.size();
    string v=s;
    reverse(v.begin(),v.end());
    string g=s.substr(0,(n-1)/2);
    reverse(g.begin(),g.end());
    if(s==v && s.substr(0,(n-1)/2)==g){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }

    
    return 0;
}