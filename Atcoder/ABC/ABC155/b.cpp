#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
const int inf = INT_MAX;
using ll = long long;
//fixed << setprecision(5)

int main(){
    int n;
    cin >> n;
    vector<int>a(n);
    rep(i,n) cin >> a[i];
    int ans=0;
    bool flag=false;
    rep(i,n){
        if(a[i]%2==0){
            if(a[i]%3!=0 && a[i]%5!=0){
                cout << "DENIED" << endl;
                return 0;
            }
        }
    }
    cout << "APPROVED" << endl;
    return 0;
}