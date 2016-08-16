#include <stdio.h>
#include <math.h>

int primeFactors(long long int n,long long int b)
{	int first = 0,f = 0,c;
	long long int i;
    while (n%2 == 0)
    {	if(b%2 == 0 )
		{
    		f = 0;
    		first = 1;
    	}
    	else if(b%2 != 0 && first == 0) {
   			f = 1;
     		return 1;
    	}
        n = n/2;
    }
    
    if(f != 1){
    	f  = 0;
	    for (i =  3; i <= sqrt(n); i = i+2) {
			first = 0;
	        while (n%i == 0)
	        {	if(b%i == 0 )
				{
	    			f = 0;
    				first = 1;
    			}
    			else if(b%i != 0 && first == 0) {
    				f = 1;
    				return 1;
    			}
    			n = n/i;
    		}
    	}
    	if(f!=1){
    		if (n > 2){
    			if(b%n!= 0) return 1;
    		}
    	}     
	} 
	return 0;
}
int main()
{	int t;
	scanf("%d",&t);
	long long int b;
    long long int a;
	while(t--){
		scanf("%lld%lld",&a,&b);
		int f = primeFactors(b,a);
		if(f == 1) printf("No\n");
    	else printf("Yes\n");	
	}
    return 0;
}
