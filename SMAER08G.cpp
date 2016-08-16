#include <stdio.h>
#include <string.h>
int main()
{
	int n,i,d,f,a[1000],b[1000],p[1000];
	while(1){
		scanf("%d",&n);
		if(n==0)break;
		else{
			for(i=0;i<n;i++){
				scanf("%d%d",&a[i],&b[i]);
			}
			f=0;
		//	memset(p,0,n*sizeof(int));
			for(i=0;i<n;i++){
				d=i+b[i];
				if(p[d]!=0||d<0||d>=n){
					printf("-1\n");
					f=1;
					break;
				}
				else 
				p[d]=a[i];								
			}
			if(f==0){
				for(i=0;i<n;i++)printf("%d ",p[i]);
				printf("\n");
			}
		}
	}
	return 0;
}
