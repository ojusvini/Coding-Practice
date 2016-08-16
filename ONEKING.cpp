#include <stdio.h>
int a[100010][3];
int main()
{
	int n,b,c,i,j;
	int t;
	scanf("%d",&t);
	while(t--){
	scanf("%d",&n);
	
	for(i=0;i<n;i++){
		scanf("%d%d",&a[i][0],&a[i][1]);
		a[i][2]=0;
	}
	c=0;
	for(i=0;i<n-1;i++){
		if(a[i][2]==1)continue;
		else {
		b=0;
		for(j=i+1;j<n;j++){
			if(a[i][1]>=a[j][0]){
					if(b==0)b=1;
					a[j][2]=1;
				}
		}
		c=c+b;
		}	
	}
	if(a[n-1][2]==0)c++;
	printf("%d\n",c);
	}
	return 0;
}
