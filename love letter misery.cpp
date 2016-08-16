#include <stdio.h>
#include <string.h>

int main(){
	int t,l,i,j,c;
	char a[10005];
	scanf("%d",&t);
	while(t--){
		c = 0;
		scanf("%s",a);
		l = strlen(a);
		for(i=0;i < l/2;i++){
			j = l - i - 1;
			if(a[i] == a[j]) continue;
			else if(a[i] > a[j] ) c = c + (a[i] - a[j]);
			else c = c + (a[j] - a[i]); 
		}
		printf("%d\n",c);
	}
	return 0;
}
