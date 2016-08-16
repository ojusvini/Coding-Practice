#include <stdio.h>

int main()
{
	int t,n,i,y,f;
	scanf("%d",&t);
	while(t--){
		f=0;
		int b[2002]={0};
		scanf("%d",&n);
		int a[n];
		for(i=0;i<n;i++){
			scanf("%d",&a[i]);
			if(a[i]>=0)b[a[i]]++;
			else b[1000-a[i]]++;
		}
		for(i=0;i<n;i++){
			y=n/2;
			if(a[i]>=0){
				if(b[a[i]]>y){
					printf("YES %d\n",a[i]);
					f=1;
					break;
				
				}
			}
			else
			{
				if(b[1000-a[i]]>y) {
					printf("YES %d\n",a[i]);
					f=1;break;
				}
			}
		}
		if(f==0)printf("NO\n");
	}
	return 0;
}
