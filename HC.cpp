#include <stdio.h>
#include<string.h>
int main() {
	int t,h,n;
	char ch[4];
	scanf("%d",&t);
	while(t--){
		scanf("%d",&n);
		h=0;
		while(n--){
			scanf("%s",ch);
			if(strcmp(ch,"lxh")==0)h++;
		}
		if(h%2) printf("lxh\n");
		else printf("hhb\n");
	}
	return 0;
}
