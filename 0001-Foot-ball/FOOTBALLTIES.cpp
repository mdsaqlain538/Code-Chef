#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int n,a,b;
	int x,y,min_draw;
	
	cin>>n;
	
	while(n--){
	    
	    cin>>a>>b;
	   
	    x = a%3;
	    y = b%3;
	    
	    min_draw = std::min(x,y);
	    
	    cout<<min_draw<<endl;
	}
}
