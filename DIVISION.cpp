#include <stdio.h>
#define MOD 1000000007
#define INV 333333336

unsigned long long pow_mod(	unsigned long long b,unsigned long long n){
	unsigned long long x=1,p=b;
	while(n){
        if(n&1)
	        x=(x*p)%MOD;
   		 p=(p*p)%MOD;
    	n>>=1;
	}
	return x;
}

int main(){
	unsigned long long n, ans;
	while(scanf("%llu",&n)!=EOF){
		if(n&1) ans = ((pow_mod(2,n)+1)*INV)%MOD;
		else ans = ((pow_mod(2,n) + 2)*INV)%MOD; 
		printf("%llu\n",ans);
	}
	return 0;
}
