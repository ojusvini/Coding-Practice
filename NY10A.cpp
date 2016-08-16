#include <stdio.h>

int main()
{	int t,i,ttt,tth,tht,thh,htt,hth,hht,hhh,n;
	char a[41];
	scanf("%d",&t);
	while(t--)
	{	ttt=tth=tht=thh=htt=hth=hht=hhh=0;
		scanf("%d",&n);
		scanf("%s",a);
		for(i=0;i<38;i++) {
			if(a[i]=='T'&&a[i+1]=='T'&&a[i+2]=='T')
			ttt++;
			else if(a[i]=='T'&&a[i+1]=='T'&&a[i+2]=='H')
			tth++;
			else if(a[i]=='T'&&a[i+1]=='H'&&a[i+2]=='T')
			tht++;
			else if(a[i]=='T'&&a[i+1]=='H'&&a[i+2]=='H')
			thh++;
			else if(a[i]=='H'&&a[i+1]=='T'&&a[i+2]=='T')
			htt++;
			else if(a[i]=='H'&&a[i+1]=='T'&&a[i+2]=='H')
			hth++;
			else if(a[i]=='H'&&a[i+1]=='H'&&a[i+2]=='T')
			hht++;
			else if(a[i]=='H'&&a[i+1]=='H'&&a[i+2]=='H')
			hhh++;
		}
		printf("%d %d %d %d %d %d %d %d %d\n",n,ttt,tth,tht,thh,htt,hth,hht,hhh);
	}
	return 0;
}
