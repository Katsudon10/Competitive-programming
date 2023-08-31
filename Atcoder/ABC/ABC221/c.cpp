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
//A[i].erase(unique(ALL(A[i])),A[i].end());

int main(){
    int n;
    cin >> n;
    vector<int>a;
    while(n){
        a.push_back(n%10);
        n/=10;
    }
    sort(ALL(a));
    int ans=0;
    do{
        for(int i=1;i<a.size();i++){
            if(a[0]==0)continue;
            if(a[i]==0)continue;
            int x=0,y=0;
            rep(j,i)x=x*10+a[j];
            for(int j=i;j<a.size();j++)y=y*10+a[j];
            ans=max(ans,x*y);
        }
    }while(next_permutation(ALL(a)));
    cout << ans << endl;
    return 0;
}