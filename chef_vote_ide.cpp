#include <stdio.h>
 
int main(void) {
	int t,n,v[52],f[52],s[52],sum,count,flag,i,j,k;
	for(k=0;k<52;k++)
        f[k]=0;
	scanf("%d",&t);
	while(t--) {
        sum=0;
        count=0;flag=0;
		scanf("%d",&n);
		for(i=1;i<=n;i++) {
			scanf("%d",&v[i]);
			sum+=v[i];
			if(v[i]>=n || sum>n ) {
				flag=1;
				continue;
				}
		}
		if(sum != n) {
			flag=1;
		}
		if(flag==1) {
			printf("-1\n");
		}
		else {
			for(i=1;i<=n;i++) {
				count=0;
				for(j=n;j>=1;j--) {
					if(j==i) {
						continue;
					}
					if(count==v[i]) {
						break;
					}
					else {
						if(f[j]==0) {
							s[j]=i;
							count++;
							f[j]=1;
						}
					}
				}
			}
			for(i=1;i<=n;i++) {
				printf("%d ",s[i]);
			}
			printf("\n");
		}
	}
	return 0;
}
 
