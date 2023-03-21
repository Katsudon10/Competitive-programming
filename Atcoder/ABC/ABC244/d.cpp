#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
const int inf = INT_MAX;

int main(){
    char s1,s2,s3,t1,t2,t3;
    cin >> s1 >> s2 >> s3 >> t1 >> t2 >> t3;
    int num=0;
    if(s1!=t1)num++;
    if(s2!=t2)num++;
    if(s3!=t3)num++;
    if(num==2){
        cout << "No" << endl;
    }else{
        cout << "Yes" << endl;
    }
    return 0;
}