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
		j=0;
		s=0,maxs=1000000,n=0,max=0;
		for(i=0;i<at;i++){
			s+=a[i];
			n++;
			while(s>bt){
				s=s-a[j++];
				n--;
			}
			if(n>=max){
				if(n==max){
					if(s<maxs) maxs=s;
				}
				else {
					max=n;
					maxs = s;
				}				
			}
		}
	printf("%d %d\n",maxs,max);
	}
	return 0;
}
