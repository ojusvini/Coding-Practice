#include <stdio.h>
char m[100000000]={'0'};
long long int count = 0;
long long int sum1(long long int n){
	long long int sum,dig,num;
	num=n;
	sum = 0;
	while(num>0){
		dig=num%10;
		sum+=dig*dig;
		num=num/10;		
	}
	count++;
	if(sum==1) return 1;
	else if(m[sum]=='1') return 0;
	else {
		m[sum]='1';
		sum1(sum);
	}
	
}
int main()
{	
	long long int n;
	scanf("%lld",&n);
	long long int a;
	a=sum1(n);
	if(a)printf("%lld\n",count);
	else
	printf("-1\n");
	return 0;
}
