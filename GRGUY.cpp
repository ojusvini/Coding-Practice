#include <stdio.h>
#include <string.h>
char a[200005];
char b[200005];

int main(){
	int t,i,j,c,f,e;
	scanf("%d",&t);
	while(t--){
		scanf("%s%s",a,b);
		j = strlen(a);
		c = 0;
		e = 0;
		if(j==1){
			if(a[0]=='.'||b[0]=='.'){
				//printf("Yes\n0\n");
				e = 0;
			}
			else {
				e = 1;
			}
		}
		else {
			if(a[0]=='.'&&b[0]=='#'){
				f = 1;
			}
			else if(a[0]=='#'&&b[0]=='.'){
				f = 2;
			}
			else if(a[0]=='#'&&b[0]=='#'){
				//printf("No\n");
				e = 1;
			}
			else if(a[0]=='.'&&b[0]=='.'){
				if(a[1]=='.') f = 1;
				else if(b[1]=='.') f = 2;
			}
			if(e!=1){
				for(i=0;i<j-1;i++){
					//printf("At position %d array %d \n",i,f);
					if(f==2){
						if(b[i+1]=='#'){
							if(a[i+1]!='#'){
								f = 1;
								c++;
							}
						else{
							e = 1;
							break;
							}
						}
					}
					else if(f==1){
						if(a[i+1]=='#'){
							if(b[i+1]!='#'){
								f = 2;
								c++;
							}
							else{
								e = 1;
								break;
							}
						}
					}
				}
			}
		}
		if(e==1) printf("No\n");
		else printf("Yes\n%d\n",c);
	}
	return 0;
}
