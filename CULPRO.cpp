#include <stdio.h>

int b[100005]={0};
int main()
{
	int n;
	scanf("%d",&n);
	int a[5010][2];
	int i,j;
	for(i=0;i<n;i++){
		scanf("%d%d",&a[i][0],&a[i][1]);
	}
	int ctr,k=0,max;
	for(i=0;i<n;i++){
		ctr=0;
		for(j=0;j<n;j++){
			if(i!=j){
				if( a[j][0]>=a[i][0]&&a[j][0]<=a[i][1]||a[j][1]>=a[i][0])
				ctr++;
			}
		}
		b[k++]=ctr;
	}
	max = b[0];
	for(i=1;i<n;i++){
		if(max<b[i]) max = b[i];
	}
	printf("%d\n",max);
	return 0;
}
