#include <stdio.h>
#include <string.h>
#define F 0
#define B 1
#define L 2
#define R 3
#define T 4
#define BO 5
int main(){
	int a[7];
	char s[20];
	int t,f,i;
	scanf("%d",&t);
	while(t--){
		for(i=0;i<6;i++){
			scanf("%s",s);
			if(strcmp(s,"black")==0) a[i] = 0;
			else if(strcmp(s,"blue")==0) a[i] = 1;
			else if(strcmp(s,"red")==0) a[i] = 2;
			else if(strcmp(s,"green")==0) a[i] = 3;
			else if(strcmp(s,"yellow")==0) a[i] = 4;
			else if(strcmp(s,"orange")==0) a[i] = 5;
		}
		f = 0;
		if(a[F]==a[L]||a[F]==a[R]){
			if(a[F]==a[T]||a[F]==a[BO]){
				f = 1;
			}
		}
		if(f==0){
			if(a[B]==a[L]||a[B]==a[R]){
				if(a[B]==a[T]||a[B]==a[BO]){
					f = 1;
				}
			}
		}
		if(f==0) printf("NO\n");
		else printf("YES\n");
	}
	return 0;
}
