#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	
	long int test_cases;
	cin>>test_cases;
	
	while(test_cases--){
	    
	    long int number_spells;
	    
	    cin>>number_spells;
	    
	    long int val = number_spells*(number_spells+1)/2;
	    
	    long int volatility[number_spells], strength[number_spells], max_strength[val];
	    
	    for(int i = 0; i < number_spells; i++){
	        
	            cin>>volatility[i]>>strength[i];
	
	    }
	    
	    long int inital = 0;
	    
	    for(int j = 0; j < number_spells; j++){
	        
	        for(int k = j+1; k < number_spells; k++){
	            
	            max_strength[inital] = strength[j] * volatility[k] + volatility[j] * strength[k];
	            
	            inital++;
	            
	        }
	    }
	    
	  cout << *std::max_element(max_strength, max_strength + inital) << "\n";

	    
	}
	return 0;
}
