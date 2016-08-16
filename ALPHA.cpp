#include <stdio.h>
long long int p[]={2,3,5,7,11,13,17,19,23,29,31,37,43,47};

int main()
{
	long long int t,a0, n, l, r, k, ctr, i,j,pr,m;
	scanf("%lld", &t);
	while(t--){
		ctr = 0;
			scanf("%lld%lld%lld", &n, &l, &r);
			for(i=0;i<15&&p[i]<=n;i++){
				if(l%p[i]==0) a0 = l;
				else a0 = l+p[i]-(l%p[i]);
				
				ctr = ctr+((r-a0)/p[i])+1;
				printf("ctr at %lld = %lld\n",p[i], ctr);
			}
		for(j=0;j<15&&p[j]<=n;j++){
			pr = p[j];
			for(k = j+1;k<15&&p[k]<=n;k++){
				pr = pr*p[k];
				if(l%pr==0) a0 = l;
				else a0 = l+ pr-(l%pr);
				m = ((r-a0)/pr)+1;
			printf("m at %lld=%lld\n",pr, m);
				ctr = ctr -m;
		}
			}
		printf("%lld\n", ctr);				
	}
}
