#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
const int inf = INT_MAX;

int main(){
    int num;
    cin >> num;
    int num_1=num%10,num_10=num%100/10,num_100=num/100;
    int num_max=max(num_100,max(num_10,num_1));
    int num_min=min(num_100,min(num_10,num_1));
    cout << num_max-num_min << endl;
}