#include <stdio.h>

int main()
{
	int t,g,mg,i,maxg,maxmg;
	scanf("%d",&t);
	while(t--) {
		scanf("%d%d",&g,&mg);
		int a[g],b[mg];
		for(i=0;i<g;i++)scanf("%d",&a[i]);
		for(i=0;i<mg;i++)scanf("%d",&b[i]);
		maxg=a[0];
		for(i=1;i<g;i++){
			if(a[i]>maxg) maxg=a[i];
		}
		maxmg=b[0];
		for(i=1;i<mg;i++){
			if(b[i]>maxmg) maxmg=b[i];
		}
		if(maxg>=maxmg) printf("Godzilla\n");
		else if(maxg<maxmg) printf("MechaGodzilla\n");
		else printf("uncertain\n");
	}
	return 0;
}
