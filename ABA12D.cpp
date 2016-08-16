#include <stdio.h>

int isprime(int x) {
	int i;
	if(x == 1)
	return 0;
	for ( i = 2;i<= x/2;i++) {
		if(x%i == 0)
		return 0;
	}
	return 1;
}

int main() {
	long long int a,b,i,j,sum = 0, c = 0;
	int T;
	scanf("%d" , &T);
	while( T-- > 0 ) {
	c = 0;
	
	scanf("%d%d" , &a,&b);
		for (j = a; j <=b;j++) {
				sum = 0;
		for ( i = 1; i <= j; i++) {
				if(j%i == 0) {
					sum += i;
			}
		}
		if(isprime(sum)) c++;
	}
		printf("%d\n",c);
	}
	return 0;
}
