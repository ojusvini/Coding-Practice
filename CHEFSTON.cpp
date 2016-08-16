#include <stdio.h>

#define MAX 100000

int main ()
{
	int t;
	long long int n, k, i, max; 
	scanf("%d", &t);
	int a[MAX];
	int b[MAX];
	int p[MAX];
	
	while (t--) {
		scanf("%lld%lld", &n, &k);
		
		
		for (i = 0; i < n; i++) {
			scanf("%lld", &a[i]);
		}
		
		for (i = 0; i < n; i++) {
			scanf("%lld", &p[i]);
		}
		
		max = -1;
		for (i = 0; i < n; i++) {
			b[i] = (k/a[i])*p[i];
			if (b[i] > max) {
				max = b[i];
			}
		}
		
		printf("%lld\n", max);
	}
}
