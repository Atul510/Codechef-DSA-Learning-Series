#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){
	  ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin>>t;
    while(t--){
    	ll N,Z;
    	cin>>N>>Z;
    	priority_queue<int> pq;
    	ll ans=0;
    	for(int i=0;i<N;i++){
    	 	int a;
    	 	cin>>a;
    	 	pq.push(a);
    	}

    	while(Z>0){
    		if(pq.top()==0)
    		    break;
    		int x = pq.top();pq.pop();
    		Z -= x;
    		ans++;
    		pq.push(x/2);
    		
    	}
    	if(Z>0)
    	    cout<<"Evacuate"<<"\n";
        else
    	    cout<<ans<<"\n";
    }
}
