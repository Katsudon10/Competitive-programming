#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
const int inf = INT_MAX;
using ll = long long;
//fixed << setprecision(10)

int main(){
    int n,m;
    cin >> n >> m;
    vector<bool>flag(n,false);
    vector<int>num(n);
    int AC=0,WA=0;
    rep(i,m){
        int p;
        string s;
        cin >> p >> s;
        if(s=="AC"){
            if(!flag[p-1]){
                AC++;
                flag[p-1]=true;
            }
        }
        if(s=="WA"){
            if(!flag[p-1])num[p-1]++;
        }
    }
    rep(i,n){
        if(flag[i])WA+=num[i];
    }
    cout << AC << ' ' << WA << endl;
    return 0;
}