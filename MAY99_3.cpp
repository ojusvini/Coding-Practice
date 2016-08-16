#include <stdio.h>

int gcd(int a,int b){
	if(b==0) return a;
	else return gcd(b,a%b);
}

int main(){
	int t,q1,q2,w;
	scanf("%d",&t);
	while(t--){
		scanf("%d%d%d",&q1,&q2,&w);
		if(q1<w&&q2<w) printf("NO\n");
		else {
			if( (w % gcd(q1,q2)) == 0) printf("YES\n");
			else printf("NO\n");
		}
	}
	return 0;
}
