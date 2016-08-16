#include <iostream>
using namespace std;

long long int euclid_gcd(long long int a,long long int b);
 
int main()
{	int t;
	cin>>t;
	long long int x,y,gcd;
	while(t--){
		cin>>x>>y;
		gcd=euclid_gcd(x,y);
		
		if(y==1)
				cout<<"Yes\n";
			else if(gcd==1)
					cout<<"No\n";
				else if(gcd==y)
						cout<<"Yes\n";
					else {
						int flag = 0;
						while(1){
							y=y/gcd;
							if(y==0) break;
							else {
								gcd=euclid_gcd(gcd,y);
								if(gcd==y) {
									flag=1;
									break;
								}
								else if(gcd==1){
									flag=0;
									break;
								}
							}
						}
						
						if(flag==0)
								cout<<"No\n";
							else if(flag==1)
									 cout<<"Yes\n";
					}	
	}
    return 0;
} 

long long int euclid_gcd(long long int a,long long int b) {
	if(b==0)
		return a;
	else return euclid_gcd(b,a%b);
}
