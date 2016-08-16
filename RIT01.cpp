#include <stdio.h>
#include <string.h>

int main(){
	int t,n,i;
	scanf("%d",&t);
	char a[100005];
	while(t--){
		scanf("%s",a);
		n = strlen(a);
		int c = 0;
		int d = 0;
		for(i=1;i<n;i++){
			if(a[i]==a[i-1])c++;
			else {
				d+=c;
				c = 0;
			}
		}
		d+=c;
		printf("%d\n",d);
	}
	return 0;
}
