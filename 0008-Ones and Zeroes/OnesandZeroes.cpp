#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){

	    int n;
	    cin>>n;
	    string s;
	    cin>>s;

	    int zero_count=0,one_count=0,ans=0;

	    vector<pair<int,int>> store;

	    for(int i=0;i<n;i++){
	        if(i==0 and s[i]=='0'){
	            int x=zero_count+1,y=one_count;
	            //x=1,y=0
	            store.push_back({x, y});
	            if(y>=x){
	                ans++;
	            }
	        }else if(i==0 and s[i]=='1'){
	            int x=zero_count,y=one_count+1;

	            store.push_back({x, y});
	            if(y>=x){
	                ans++;
	            }
	        }else{
	            if(s[i]=='0'){
	                int x = store[i-1].first;
	                int y = store[i-1].second;

	                int x1 = x+1;
	                int y1 = y;
	                store.push_back({x1,y1});
    	           if(y1>=x1){
    	                ans++;
    	            }

	            }else{
	                int x = store[i-1].first;
	                int y = store[i-1].second;

	                int x1 = x;
	                int y1 = y+1;
	                store.push_back({x1,y1});
    	           if(y1>=x1){
    	                ans++;
    	            }
	            }

	        }
	    }

	    cout<<ans<<endl;
	}
}
