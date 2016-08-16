#include <stdio.h>
int b[100000];
char a[510][510];
int main()
{	
	int n;
	int m,i,j,p,k,ctr,max=0;
	scanf("%d%d",&n,&m);
	
	for(i=0;i<n;i++)scanf("%s",a[i]);
	k=0;
	
	for(i=0;i<n-1;i++){
		for(j=i+1;j<n;j++){
			ctr=0;
			for(p=0;p<m;p++){
				if(a[i][p]=='1'||a[j][p]=='1')
				ctr++;
			}
			b[k++]=ctr;		
		}
	}
	for(i=0;i<k;i++){
		if(b[i]>max)
		max = b[i];
	}
	ctr=0;
	for(i=0;i<k;i++){
	if(b[i]==max)
	ctr++;
	}
	printf("%d\n%d\n",max,ctr);
	return 0;
}
