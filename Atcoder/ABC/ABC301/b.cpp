#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
#define ALL(a)  (a).begin(),(a).end()
const int inf = INT_MAX;
using ll = long long;
using P = pair<int,int>;
using Graph = vector<vector<int>>;

vector<int>dxs={1,0,-1,0};
vector<int>dys={0,1,0,-1};

//fixed << setprecision(10)


int main(){
    int n;
    cin >> n;
    vector<int>A(n);
    rep(i,n)cin >> A[i];
    vector<int>ans;
    rep(i,n-1){
        if(abs(A[i]-A[i+1])!=1){
            ans.push_back(A[i]);
            if(A[i]>A[i+1]){
                for(int j=A[i]-1;j>=A[i+1]+1;j--){
                    ans.push_back(j);
                }
            }else{
                for(int j=A[i]+1;j<=A[i+1]-1;j++){
                    ans.push_back(j);
                }
            }
        }else{
            ans.push_back(A[i]);
        }
    }
    ans.push_back(A[n-1]);
    for(int i:ans){
        cout << i << ' ';
    }
    cout << endl;
    return 0;
}