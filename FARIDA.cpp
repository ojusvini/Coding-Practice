#include <stdio.h>
long long int max(long long int a,long long int b){
	return b>a?b:a;
}
int main(){
	long long int t,i,j;
	scanf("%d",&t);
	j = 1;
	while(t--){
		long long int n;
		scanf("%lld",&n);
		if(n==0) printf("Case %lld: 0\n",j);
		else {
			long long int a[n];
			long long int	t[n+1];
			for(i=0;i<n;i++){
				scanf("%lld",&a[i]);
			}
			t[0] = a[0];
			if(n==1) printf("Case %lld: %lld\n",j,t[0]);
			else {
				t[1] = max(t[0],a[1]);
				for(i=2;i<n;i++){
					t[i] = max(t[i-1],t[i-2]+a[i]);
				}
				printf("Case %lld: %lld\n",j,t[n-1]);
			}	
		}
		j++;
	}
	return 0;
}
