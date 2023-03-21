#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
const int inf = INT_MAX;
using ll = long long;
//fixed << setprecision(10)

int main(){
    int n;
    cin >> n;
    vector<int>odd,even;
    rep(i,n){
        int a;
        cin >> a;
        if(a%2==0){
            even.push_back(a);
        }else{
            odd.push_back(a);
        }
    }
    sort(even.rbegin(),even.rend());
    sort(odd.rbegin(),odd.rend());
    int ans=-1;
    if(even.size()>=2)ans=max(ans,even[0]+even[1]);
    if(odd.size()>=2)ans=max(ans,odd[0]+odd[1]);
    cout << ans << endl;
    return 0;
}