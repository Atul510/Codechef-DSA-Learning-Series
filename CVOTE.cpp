#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){
	  ll N,M;
    cin>>N>>M;
    map<string,string> country;
    map<string,ll> person;
    map<string,ll> winner;
    
    while(N--){
        string a,b;
        cin>>a>>b;
        country[a]=b;
    }
    while(M--){
        string a;
        cin>>a;
        person[a]++;
        winner[country[a]]++;
    }
    
    string res1="",res2="";
    int ans = INT_MIN;
    for(auto it : winner){
        if(it.second > ans){
            ans = it.second;
            res1 = it.first;
        }
    }
    ans = INT_MIN;
    for(auto it : person){
        if(it.second > ans){
            ans = it.second;
            res2 = it.first;
        }
    }
    
    cout<<res1<<"\n"<<res2;
}
