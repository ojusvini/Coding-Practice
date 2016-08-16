#include <stdio.h>

int main()
{
	int n,k,i,j,m;
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)scanf("%d",&a[i]);
	scanf("%d",&k);
	for(i=0;i<=n-k;i++){
		if(i!=0&&m==a[i-1]){
		m = a[i];
		for(j=0;j<k;j++){
			if(m < a[i+j])
				m = a[i+j];
		}
		if(i != n-k) printf("%d ",m);
		else printf("%d",m);
		}
		else {
			if(m<a[i+k-1]) m = a[i+k-1];
			if(i != n-k) printf("%d ",m);
			else printf("%d",m);			
		}	
	}
	printf("\n");
	return 0;
}
