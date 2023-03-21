#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
const int inf = INT_MAX;

int main(){
    int num;
    cin >> num;
    vector<string>fname(num);
    vector<string>name(num);
    rep(i,num)cin >> fname[i] >> name[i];
    vector<bool>dp(num,true);
    bool flag=true;
    rep(i,num){
        for(int j=i+1;j<num;j++){
            if((fname[i]==fname[j] && name[i]==name[j]))dp[i]=false;
            if((fname[i]==fname[j] && name[i]==fname[j]))dp[i]=false;
            if((fname[i]==name[j] && name[i]==fname[j]))dp[i]=false;
            if((fname[i]==name[j] && fname[i]==name[j]))dp[i]=false;
            if((name[i]==fname[j] && fname[i]==name[j]))dp[i]=false;
            if((name[i]==fname[j] && name[i]==name[j]))dp[i]=false;
            if((name[i]==name[j] && fname[i]==name[j]))dp[i]=false;
            if((name[i]==name[j] && name[i]==name[j]))dp[i]=false;
        }
        
        
    }
    rep(i,num){
        if(!dp[i]){
            cout << "No" << endl;
            return 0;
        } 
    }
    cout << "Yes" << endl;
    
    return 0;
}