#include <stdio.h>
#include <string.h>

int pallin(char a[],int l){
	int i,j;
	for(i=0,j= l-1;i<=j;i++,j--){
		if(a[i]!=a[j]) return 0; //aabaa
	}
	return 1;
}

int main(){
	int t,l,i,j;
	char a[100003];
	char c[100003];
	scanf("%d",&t);
	while(t--){
		scanf("%s",a);
		l = strlen(a);
		if(pallin(a,l)==1) printf("YES\n");
		else {
			c[0] = a[0];j = 1;
			for(i=1;i<l;i++){
				if(a[i]!=a[i-1]) c[j++] = a[i];
			}
			if(pallin(c,j)==1) printf("YES\n");
			else printf("NO\n");
		}
	}
}
