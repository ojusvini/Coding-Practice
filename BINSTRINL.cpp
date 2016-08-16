#include <stdio.h>

int main(){
	long long int t,n,m,ans;
	scanf("%lld",&t);
	while(t--){
		scanf("%lld%lld",&n,&m);
		ans = (n-m) & ((m-1)/2);
		if(ans==1)
		printf("%d\n",0);
		else printf("%d\n",1);
	}
	return 0;
}
#include <stdio.h>

int main(){
	long long int t,n,m,z,w,q;
	scanf("%lld",&t);
	while(t--){
		scanf("%lld%lld",&n,&m);
        z = n-m;
        w = (m-1)/2;
        q = z&w;
        if(q==0) printf("1\n");
        else printf("0\n");
	}
	return 0;
}
