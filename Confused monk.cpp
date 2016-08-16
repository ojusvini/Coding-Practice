#include <stdio.h>
#define modulus 1000000007

long long int GCD(long long int A,long long int B) {
    if(B==0)
        return A;
    else
        return GCD(B, A % B);
}
long long int modular_pow(long long int base, long long int exponent)
{
    long long int result = 1;
    while (exponent > 0)
    {
        if (exponent % 2 == 1)
            result = (result * base) % modulus;
        exponent = exponent >> 1;
        base = (base * base) % modulus;
    }
    return result;
}

int main(){
	long long int t,i,j;
	long long int n;
	long long int ans;
	scanf("%lld",&n);
	long long int a[n];
	for(i=0;i<n;i++){
		scanf("%lld",&a[i]);
	}
	if(n==1){
		ans = modular_pow(a[0],a[0]);
	}
	else {
		long long int gcd = GCD(a[0],a[1]);
		for(i=2;i<n;i++){
			gcd = GCD(a[i],gcd);
		}
		long long int p = 1;
		for(i=0;i<n;i++){
			p = ((p%modulus)*(a[i]%modulus)) %modulus;
		}
		ans = modular_pow(p,gcd);	
	}
	printf("%lld\n",ans);
	
	return 0;
}
