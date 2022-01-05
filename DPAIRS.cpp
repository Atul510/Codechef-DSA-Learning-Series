#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve(){
    int N,M;
    cin>>N>>M;
    vector<int>A(N),B(M);
    vector<pair<int,int>> res;
    map<int,int> mp;

    for(int i=0;i<N;i++)
        cin>>A[i];
    for(int i=0;i<M;i++)
        cin>>B[i];

    int minA = INT_MAX;
    int minA_idx = 0;
    for(int i=0;i<N;i++){
        if(A[i]<minA){
            minA=A[i];
            minA_idx=i;
        }
    }
    int maxB = INT_MIN;
    int maxB_idx = 0;
    for(int i=0;i<M;i++){
        if(B[i]>maxB){
            maxB=B[i];
            maxB_idx=i;
        }
    }

    for(int i=0;i<M;i++){
        res.push_back({minA_idx,i});
    }
    for(int i=0;i<N;i++){
        if(A[i]!=minA){
            res.push_back({i,maxB_idx});
        }
    }

    for(int i=0;i<res.size();i++ )
        cout<<res[i].first<<" "<<res[i].second<<"\n";
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
	  solve();
	   
}
