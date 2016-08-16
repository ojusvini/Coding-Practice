#include <stdio.h>
#include <string.h>
int c[1000]={0};
int s[1000]={0};
int main()
{
	int t,n,k,f,a,b,tc,i;
	scanf("%d",&t);
	tc =1;
	while(t--){
		scanf("%d%d",&n,&k);
		f=0;
		memset(c,0,n*sizeof(int));
		memset(s,0,n*sizeof(int));
		for(i=0;i<k;i++){
			scanf("%d%d",&a,&b);
			s[a]=1;
			c[b]=1;
			if((s[a]==1&&c[a]==1)||(s[b]==1&&c[b]==1)){
				f=1;
			}			
		}
		if(f)printf("Scenario #%d: spied\n",tc);
		else printf("Scenario #%d: spying\n",tc);
		tc++;
	}
	return 0;
}
