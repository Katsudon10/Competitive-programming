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
     
        vector<int>R(n),L(n);
        L[0]=A[0];
        for(int i=1;i<n;i++)L[i]=max(A[i],L[i-1]);
        R[n-1]=A[n-1];
        for(int i=n-2;i>=0;i--)R[i]=max(A[i],R[i+1]);
     
        int d;
        cin >> d;
        rep(i,d){
            int l,r;
            cin >> l >> r;
            cout << max(L[l-2],R[r]) << endl;
        }
        return 0;
    }