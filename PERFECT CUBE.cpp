#include <stdio.h>
#include <math.h>
#define MAX 1000000007;

long long int c[1000007];

long long int primeFactors(long long int n)
{	long long int i,j;
	j =0;
    while (n%2 == 0)
    {	c[j++] = 2;
        printf("%d ", 2);
        n = n/2;
    }
    
    for ( i = 3; i <= sqrt(n); i = i+2)
    {
        while (n%i == 0)
        {	c[j++] = i;
            printf("%d ", i);
            n = n/i;
        }
    }
    
    if (n > 2){
    	c[j++] = n;
    	printf ("%d", n);
    }
    return j;
}
int main()
{	
	int t;
	long long int n,a,p,c1,m;
	long long int i,j;
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
//	printf("j = %d\n",j);
	
	for(i = 0;i<j;i++){
		if(c[i]==c[i+1]){
			c1++;
		}
		else {
			printf("%lld\t",c1);
			m = c1%3;
			if(m!=0){
				while(m--){
						p = (p*a[i])%MAX;
				}
			
			}
			c1 = 1;				
		} 
	}
	printf("%lld\t",p);
	}
}
