#include <stdio.h>
int a[1000002];
int main(){
	int i,j,k,c;
	i = 1;
	j = 1;
	c = 1;
	a[1] = 1;
	for(i=2;i<=1000000;){
		k = a[j];
		c++;
		while(k--){
			a[i++] = c;
		}
		j++;
	}
	//for(i=999990;i<=1000000;i++) printf("%lld\n",a[i]);
	scanf("%d",&k);
	j = 1;
	while(k--){
		scanf("%d",&i);
		printf("Case #%d: %d\n",j++,a[i]);
	}
}
