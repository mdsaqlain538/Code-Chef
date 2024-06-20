#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	
	long int test_cases;
	cin>>test_cases;
	
	while(test_cases--){
	    
	    long int n,m;
	    cin>>n>>m;
	    
	    if( m < n ){
	        
	        cout<<n-m<<endl;
	        
	    }else{
	        
	        long int a = m%n;
	        long int b = n-a;
	            
	        cout<<std::min(a,b)<<endl;
	        
	    }
	    
	}

}
