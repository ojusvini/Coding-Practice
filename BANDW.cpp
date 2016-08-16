#include <stdio.h>
#include <string.h>

int main(){
	char s[505], o[505];
	int t,f,c,l,g,i;
	//scanf("%d",&t);
	while(1){
		scanf("%s%s",s,o);
		if(s[0]=='*')
		break;
		//printf("%s %s\n",s,o);
		l = strlen(s);
		c = 0;
		for(i=0;i<l;i++){
			f = 0;
			g = 0;
			while(f==0){
				while(s[i]!=o[i]){
					s[i] = o[i];
					i++;
					g = 1;
				}
				f = 1;
				if(g==1) c++;
			}
		}
		printf("%d\n",c);
	}
	return 0;
}
