#include <stdio.h>
int a[300002];
int main()
{
	int at,i,j;
	long long int s,maxs,bt;
	scanf("%d%lld",&at,&bt);
	for(i=0;i<at;i++){
		scanf("%d",&a[i]);
	}
	j=0;
	s=0,maxs=-10000000;
	for(i=0;i<at;i++){
		s+=a[i];
		while(s>bt){
			s=s-a[j++];
		}
		if(s>maxs) maxs=s;
	}
	printf("%lld\n",maxs);
	return 0;
}
