#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	
	long int test_cases;
	cin>>test_cases;
	
	while(test_cases--){
	    
	    long int x_speed, y_speed;
	    
	    cin>>x_speed>>y_speed;
	    
	    long int final_distance=(y_speed*10)-(x_speed*10);
	    
	    long int final_speed = 100 - y_speed;
	    
	    if(final_distance/final_speed<=0){
	        cout<<1<<endl;
	    }else{
	        cout<<ceil((double)final_distance/final_speed)<<endl;
	    }
	}
}
