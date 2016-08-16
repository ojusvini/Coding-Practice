#include <stdio.h>

int b[10000000]={0};
int main()
{
	int n;
	scanf("%d",&n);
	int i,j,k,l,max,min,x;
	int a[2];
	max = -1;
	min = 9999999999;
	for(i=0;i<n;i++){
		scanf("%d%d",&a[0],&a[1]);
		for(j=a[0];j<=a[1];j++){
			b[j]++;
		}
		if(min>a[0]) min = a[0];
		if(max<a[1]) max = a[1]; 
		
	}
	x = -1;
	for(i=min;i<=max;i++){
		if(x<b[i]) x = b[i];
	}
	printf("%d\n",x);
	return 0;
}
