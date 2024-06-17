#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int test_cases;
	cin>>test_cases;
	
	while(test_cases--){
	    
	    long int n;
	    cin>>n;
	    
	    long int Array[n];
	    
	    for(int i = 0; i < n; i++){
	        
	        cin>>Array[i];
	        
	    }
	    long int value = n*(n+1)/2;
	  
	    
	    long int count=0, max_size[value]={0};

	    for (int i=0; i<n; i++)
	    {
            // Pick ending point
            for (int j=i; j<n; j++)
            {
                int array_sum=0;
                // Print subarray between current starting
                // and ending points
                for (int k=i; k<=j; k++){
                    array_sum = array_sum + Array[k];
                }
                if(array_sum%2==0){
                    max_size[count] = (j-i)+1;
                    count++;
                }
            }
        }
        
        cout << *std::max_element(max_size, max_size + count) << "\n";

	}
}
