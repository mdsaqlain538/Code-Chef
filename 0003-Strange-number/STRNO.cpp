#include <bits/stdc++.h>
using namespace std;

long long int sum_of_powers(long long int number)
{
    vector<int> saqlain;
    while(number%2==0)
    {
        saqlain.push_back(2);
        number/=2;
    }
    for(long long int it=3;it<sqrt(number);it=it+2)
    {
        while(number%it==0)
        {
            saqlain.push_back(it);
            number/=it;
        }
    }
    if(number>2)
        saqlain.push_back(number);
    return saqlain.size();
}


bool is_prime(long long int x){
    if(x<=1)
        return false;
    if(x<=3)
        return true;
    if(x%2==0 || x%3==0)
        return false;
    for(long long int i=5;i*i<=x;i=i+6)
        if(x%i==0 || x%(i+2)==0)
            return false;
    return true;
}

int main() {
	// your code goes here
	long long int t;
	cin>>t;
	while(t--){
	    long long int a,b;
	    cin>>a>>b;
	    if(a<b || a==b) 
	        cout<<0<<endl;
	    else{
	        if(is_prime(a) && b==1){
	            cout<<1<<endl;
	        }
	        else if(is_prime(a) && b!=1){
	            cout<<0<<endl;
	        }
	        else{
	            if(a==1 && b==0)
	                cout<<1<<endl;
	            else{
	                long long ct = sum_of_powers(a);
	                if(b<=ct && b!=0)
	                    cout<<1<<endl;
	                else
	                    cout<<0<<endl;
	            }
	        }
	    }
	}
	return 0;
}
