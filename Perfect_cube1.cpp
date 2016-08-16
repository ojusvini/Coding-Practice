#include <stdio.h>
#include <math.h>
#define MAX 1000000007;

int c[10000009];

int primeFactors(long long int n)
{	int i,j;
	j =0;
    while (n%2 == 0)
    {	c[j++] = 2;
        n = n/2;
    }
    
    for ( i = 3; i <= sqrt(n); i = i+2)
    {
        while (n%i == 0)
        {	c[j++] = i;
            n = n/i;
        }
    }
    
    if (n > 2){
    	c[j++] = n;
    }
    return j;
}
int main()
{	
	int t;
	long long int n,a,p,c1,m;
	int i,j;
	scanf("%d",&t);
	while(t--){
		scanf("%lld",&n);
		p = 1;
		for(i=0;i<n;i++){
			scanf("%lld",&a);
			p = (p*a)%MAX;
		}
	j = primeFactors(p);
	c1 = 1;
	
	for(i = 0;i<j;i++){
		if(c[i]==c[i+1]){
			c1++;
		}
		else {
			m = c1%3;
			m = 3-m;
			if(m!=3){
				while(m--){
					p = (p*c[i])%MAX;
				}
			
			}
			c1 = 1;			
		} 
	}	
	printf("%lld\n",p);
	}
}
