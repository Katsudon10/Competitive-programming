#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
const int inf = INT_MAX;
using ll = long long;
//fixed << setprecision(5)

int main(){
    int h,w;
    cin >> h >> w;
    vector<string>s(h),t(h);
    rep(i,h) cin >> s[i];
    rep(i,h) cin >> t[i];
    vector<int>sns(w),tnt(w),snn(w),tnn(w);
    rep(i,h){
        rep(j,w){
            if(s[i][j]=='.') sns[j]++;
            if(t[i][j]=='.') tnt[j]++;
            if(s[i][j]=='#') snn[j]++;
            if(t[i][j]=='#') tnn[j]++;
        }
    }
    sort(sns.begin(),sns.end());
    sort(tnt.begin(),tnt.end());
    sort(snn.begin(),snn.end());
    sort(tnn.begin(),tnn.end());
    rep(i,w){
        if(sns[i]!=tnt[i] || snn[i]!=tnn[i]){
            cout << "No" << endl;
            return 0;
        }
    }
    cout << "Yes" << endl;
    return 0;
}