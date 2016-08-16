#include <stdio.h>

int main()
{
	long long int t,n,c,k,i,sum,ng,pos,min;
	scanf("%lld",&t);
	while(t--) {
		sum=c=ng=0;		
		scanf("%lld%lld",&n,&k);
		long long int a[n];
		for(i=0;i<n;i++) {
			scanf("%lld",&a[i]);
			if(a[i]<0) ng++;
		}
		
		if(ng>=k){
			for(i=0;i<k;i++)
			{a[i] = -1*a[i];
			}
			c=k;
		}
		else {
			for(i=0;i<ng;i++)
			a[i] = -1*a[i];
			c=ng;
		}	
		if(c==k){
			for(i=0;i<n;i++)
			sum=sum+a[i];
			printf("%lld\n",sum);
			continue;
		}
		else if(c<k) {
			if(a[c]==0){
			for(i=0;i<n;i++)
			sum=sum+a[i];
			printf("%lld\n",sum);
			continue;
			}
			else {
				pos=0;
				min=a[0];
				for(i=1;i<n;i++){
					if(a[i]<min) {
						min=a[i];
						pos=i;
					}
				}				
				if((k-ng)%2==1)
					a[pos]=0-a[pos];
				for(i=0;i<n;i++)
					sum=sum+a[i];
					printf("%lld\n",sum);
					continue;
			}	
		}
				
	}
	return 0;
}
