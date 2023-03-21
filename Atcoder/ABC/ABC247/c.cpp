#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
const int inf = INT_MAX;

int main(){
    int num;
    cin >> num;
    vector<string>dp(num+1);
    for(int i=1;i<=num;i++){
        if(i==1){
            dp[i]=to_string(i);
        }else{
            dp[i]=dp[i-1]+' '+to_string(i)+' '+dp[i-1];
        }
    }
    cout << dp[num] << endl;
    return 0;
}