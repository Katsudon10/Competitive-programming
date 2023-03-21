#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
const int inf = INT_MAX;
using ll = long long;
//fixed << setprecision(5)

int main(){
    int n;
    cin >> n;
    string S1="HDCS";
    string S2="A23456789TJQK";
    vector<string>str(n);
    rep(i,n) cin >> str[i];
    rep(i,n){
        char s1,s2;
        s1=str[i].at(0);
        s2=str[i].at(1);
        if(S1.find(s1)==-1 || S2.find(s2)==-1){
            cout << "No" <<endl;
            return 0;
        }
        for(int j=i+1;j<n;j++){
            if(str[i]==str[j]){
                cout << "No" << endl;
                return 0;
            }
        }
    }
    
    cout << "Yes" << endl;
    return 0;
}