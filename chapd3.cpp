#include <stdio.h>
#include <math.h>
long long int gcd(long long int a,long long int b){
	if(a<b)
	return gcd(b,a);
	if(b==0)
	return a;
	else return gcd(b,a%b);
}

int main()
{	int t;
	scanf("%d",&t);
	long long int b;
    long long int a;
     long long int g;
	while(t--){
		scanf("%lld%lld",&a,&b);
		g = gcd(a,b);
//    	printf("%lld\n",g);
		if(b == 1) printf("Yes\n");
		else if(g == 1) printf("No\n");
		else if(g == b) printf("Yes\n");
		else {
			int f = 0;
			while(1){
				b = b/g;
				if(b==0) break;
				else {
					g = gcd(g,b);
					if(g == b) {
						f = 1;
						break;
					}
					else if(g == 1){
						f = 0;
						break;
					}
				}
			}
			if(f==0) printf("No\n");
			else if(f==1) printf("Yes\n");
		}	
	}
    return 0;
}
