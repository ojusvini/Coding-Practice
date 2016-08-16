#include<stdio.h>
/*int gcd(int x,int y) {
  int i;
    for(i = x; i >= 1; i--){
         if( x%i == 0 && y%i == 0){
             break;
         }
    }
    return i;
}*/


int main() {
	int t;

	scanf("%d",&t);
	long long int n,i,s,r;
	while(t--) {
		s = 0;
		scanf("%lld",&n);
		for( i = 1; i < n-1; i++) {
			int k;
    for(k = i; k >= 1; k--){
         if( i%k == 0 && (i+2)%k == 0){
             break;
         }
    }
    long long int gcd = k;
			if(gcd == 1)
			s += i;
		}
		r = s % n ;
		printf("%lld\n",r);
	}
	
}
