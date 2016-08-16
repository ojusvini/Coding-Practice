#include <stdio.h>
int a[100000];
int main()
{
	int t,bt,at,i,j,max,n,d;
	int s,maxs;
	scanf("%d",&t);
	while(t--){
		scanf("%d%d",&at,&bt);
		for(i=0;i<at;i++){
			scanf("%d",&a[i]);
		}
		max=0;
		
		for(i=0;i<at;i++){
			n=1;
			s=a[i];
			for(j=i+1;j<at;j++){
				d=s+a[j];
				if(d< bt){
				n++;
				s=d;
				}
				else break;
			}
			if(n>max){
			max =n;
			maxs=s;
			}	
		}
		printf("%d %d\n",maxs,max);
	}
	return 0;
}
