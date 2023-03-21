#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
const int inf = INT_MAX;
using ll = long long;
//fixed << setprecision(5)

int main(){
    vector<int>num(3);
    rep(i,3) cin >> num[i];
    sort(num.begin(),num.end());
    if(num[0]==5 && num[1]==5 && num[2]==7){
        cout << "YES" << endl;
    }else{
        cout << "NO" << endl;
    }

    return 0;
}