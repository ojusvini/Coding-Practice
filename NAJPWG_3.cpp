#include<stdio.h>
int main() {
	long long int a[100006];
	long long int i;
	int t;
	memset(a,0,sizeof(a));
	long long int x[100006];
	for(i=0;i<=100000;i++)
	x[i]=i;
	long long int j;
	a[0]=1;
	a[1] = 1;
	for(i=2;i<=100000;i++) {
		if(a[i]==0) {
			x[i] = i-1;
			j = 2*i;
			while(j<=100000) {
				a[j] = 1;
					x[j] = x[j]-(x[j]/i);
				j = j+i;
			}
		}
	}
	x[1] = 0;
	x[0] = 0;
	x[2] = 1;
	for(i=3;i<=100005;i++) {
		if(x[i]==i) x[i] = 1;
		else x[i] = i-x[i];	
		x[i] = x[i]+x[i-1];n
	}
	scanf("%d",&t);
	int l = 1;
	while(t--) {
		long long int n;
		scanf("%lld",&n);
		printf("Case %d: %lld\n",l,x[n]);
		l++;
	}
}
