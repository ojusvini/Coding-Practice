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
			if(a[F]==a[T]||a[F]==a[BO]||a[F]==a[B]){
				f = 1;
			}
		}
		if(f==0){
			if(a[F]==a[BO]||a[F]==a[T]){
				if(a[F]==a[L]||a[F]==a[R]||a[F]==a[B]){
					f = 1;
				}
			}
			if(f==0){
				if(a[F]==a[BO]||a[BO]==a[B]){
					if(a[BO]==a[L]||a[BO]==a[R]||a[BO]==a[T]){
						f = 1;
					}
				}
				if(f==0){
					if(a[L]==a[BO]||a[BO]==a[R]){
						if(a[BO]==a[F]||a[BO]==a[B]||a[BO]==a[T]){
						f = 1;
						}
					}
					if(f==0){
						if(a[B]==a[T]||a[B]==a[BO]){
							if(a[B]==a[F]||a[B]==a[L]||a[B]==a[R]){
							f = 1;
							}
						}
						if(f==0){
							if(a[B]==a[L]||a[B]==a[R]){
								if(a[B]==a[T]||a[B]==a[F]||a[B]==a[BO]){
									f = 1;
								}
							}
						}	
					}
				}
			}
		}
		if(f==0){
			if(a[T]==a[F]||a[T]==a[B]){
				if(a[T]==a[B]||a[T]==a[L]||a[T]==a[R]){
					f = 1;
				}
			}
			if(f==0){
				if(a[T]==a[L]||a[T]==a[R]){
				if(a[T]==a[BO]||a[T]==a[F]||a[T]==a[B]){
					f = 1;
				}
				}				
			}
		}
		if(f==0){
			if(a[L]==a[F]||a[L]==a[B]){
				if(a[L]==a[T]||a[L]==a[BO]||a[L]==a[R]){
					f = 1;
				}
			}
			if(f==0){
				if(a[L]==a[T]||a[L]==a[BO]){
				if(a[L]==a[R]||a[L]==a[F]||a[L]==a[B]){
					f = 1;
				}
				}				
			}
		}
		if(f==0){
			if(a[R]==a[F]||a[R]==a[B]){
				if(a[R]==a[T]||a[R]==a[BO]||a[R]==a[L]){
					f = 1;
				}
			}
			if(f==0){
				if(a[R]==a[T]||a[R]==a[BO]){
				if(a[R]==a[F]||a[R]==a[B]||a[R]==a[L]){
					f = 1;
				}
				}				
			}
		}
		if(f==0) printf("NO\n");
		else printf("YES\n");
	}
	return 0;
}
