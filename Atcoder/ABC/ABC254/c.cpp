#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
const int inf = INT_MAX;

int main(){
    int n,k;
    cin >> n >> k;
    vector<int>a(n);
    rep(i,n) cin >> a[i];
    vector<int>sort_num=a;
    sort(sort_num.begin(),sort_num.end());
    bool flag=true;
    while (flag)
    {
        int num=0;
        for(int i=0;i<n-k;i++){
            if(a[i]>a[i+k]){
                swap(a[i],a[i+k]); 
            }else{
                num++;
            } 
        }
        if(num==n-k) flag=false;
    }
    
    
    if(a==sort_num){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }
    return 0;
}