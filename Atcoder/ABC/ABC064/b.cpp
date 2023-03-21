#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
const int inf = INT_MAX;
using ll = long long;
//fixed << setprecision(5)

int main(){
    int n;
    cin >> n;
    int max_num=0;
    int min_num=1e9;
    int num;
    rep(i,n){
        cin >> num;
        if(num>max_num)max_num=num;
        if(num<min_num)min_num=num;
    }
    cout << max_num-min_num << endl;
    return 0;
}