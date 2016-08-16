#include <stdio.h>
#include <string.h>
char a[200005];
char b[200005];

int main(){
	int t,i,j,c,f,e,c1;
	scanf("%d",&t);
	while(t--){
		scanf("%s%s",a,b);
		j = strlen(a);
		c = 999999;
		c1 = 999999;
		e = 0;
		if(j==1){
			if(a[0]=='.'||b[0]=='.'){
				//printf("Yes\n0\n");
				e = 0;
				c = 0;
				c1 = 0;
			}
			else {
				e = 1;
			}
		}
		else {
			if(a[0]=='#'&&b[0]=='#'){
				e = 1;
			}
			if(e!=1){
				if(a[0]=='.') {
					c = 0;
					f = 1;
				}
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
				if(e!=1){
					
				if(b[0]=='.'){
					f = 2;
					c1 = 0;
					for(i=0;i<j-1;i++){
						//printf("At position %d array %d \n",i,f);
						if(f==2){
							if(b[i+1]=='#'){
								if(a[i+1]!='#'){
									f = 1;
									c1++;
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
									c1++;
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
			}
		}
		if(e==1) printf("No\n");
		else {
			if(c<c1) printf("Yes\n%d\n",c);
			else printf("Yes\n%d\n",c1);
		}
	}
	return 0;
}
