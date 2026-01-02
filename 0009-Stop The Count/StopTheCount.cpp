#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){

	    int chef_count=0,anti_chef_count=0;

        int x,res=0;
        cin>>x;

        string votes;

        cin>>votes;

        for(int j=0;j<x;j++){
            if(votes[j]=='1'){
                chef_count++;
            }else{
                anti_chef_count++;
            }
            if(chef_count>anti_chef_count){
                res++;
            }
        }
        cout<<res<<endl;
	}
}