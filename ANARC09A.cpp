#include <stdio.h>
#include <string.h>

int main()
{
	char c[2005];
	int l,i,s,cost,t;
	t=1;
	while(1){
	scanf("%s",c);
	if(c[0]=='-')break;
	else{
		l=strlen(c);
		s=0;
		cost=0;
		for(i=0;i<l;i++){
			if(c[i]=='{') s++;
			else if(c[i]=='}'){
				if(s==0){
				cost++;
				s++;
				}
				else s--;
			}
		}
		printf("%d. %d\n",t,cost +s/2);
		t++;
	}
	}
	return 0;
}
