#include <stdio.h>

int reverse(int n) {
	int r,rev = 0;
	while(n > 0) {
		r = n%10;
		rev = rev*10 + r;
		n= n / 10;
	} 
	return rev;
}
int main() {
	int n,t,a,b,sum,a1,b1;
	scanf("%d",&t);
	while(t-- >0) {
		scanf("%d%d",&a,&b);
	
	a1 = reverse(a);
	b1 = reverse(b);
	sum = a1+b1;
	sum = reverse(sum);
	printf("%d\n" ,sum);
}
}
