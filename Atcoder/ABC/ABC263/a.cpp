#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
const int inf = INT_MAX;
using ll = long long;
//fixed << setprecision(5)

int main(){
    vector<int>card(5);
    rep(i,5){
        cin >> card[i];
    }
    sort(card.begin(),card.end());
    if(card[0]==card[1] && card[1]==card[2] && card[3]==card[4]){
        cout << "Yes" << endl;
    }else if(card[0]==card[1] && card[2]==card[3] && card[3]==card[4]){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }
    return 0;
}