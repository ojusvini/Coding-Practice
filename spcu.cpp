#include <stdio.h>

int main()
{
	int t,a,i,n,f;
	scanf("%d",&t);
	while(t--) {
		scanf("%d",&n);
		f=0;
		for(i=0;i<n;i++){
			scanf("%d",&a);
			if(a>i)
			f=1;
		}
		if(f)printf("NO\n");
		else printf("YES\n");
	}
	return 0;
}
