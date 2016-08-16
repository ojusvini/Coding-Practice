#include <stdio.h>
#include <string.h>
int main()
{
	char a[20];
	int i,len,f;
	int t;
	scanf("%d",&t);
	while(t--){
		scanf("%s",a);
		len=strlen(a);
		if(len==1){
			printf("YES\n");
		}
		else{f=0;
			for(i=0;i<=len/2;i++){
				if(a[i]!=a[len-1-i]){
					f=1;
					break;
				}
			}
			if(f==0)printf("YES\n");
			else printf("NO\n");
		}
	}
	return 0;
}
