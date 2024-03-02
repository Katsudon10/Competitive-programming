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
    int n,t;
    cin >> n >> t;
    vector<ll>score(n,0);
    set<ll>st;
    map<ll,ll>mp;
    mp[0]=n;
    st.insert(0);
    rep(i,t){
        ll a,b;
        cin >> a >> b;
        if(mp[score[a-1]])mp[score[a-1]]--;
        if(mp[score[a-1]]==0)st.erase(score[a-1]);
        score[a-1]+=b;
        mp[score[a-1]]++;
        st.insert(score[a-1]);
        cout << st.size() << endl;
    }
    return 0;
}