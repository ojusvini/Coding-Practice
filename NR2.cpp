#include  <stdio.h>
int main()
{
	long long int n;
	scanf("%lld",&n);
	long long int a[n];
	long long int x,o,i,j;
	x=0;
	o=0;
	for(i=0;i<n;i++){
		scanf("%lld",&a[i]);
	}
		for(i=0;i<n-1;i++){
			for(j=i+1;j<n;j++){
				x=a[i]^a[j];
				o=o|x;
			}
		}
		printf("%lld\n",o);
		return 0;
}
