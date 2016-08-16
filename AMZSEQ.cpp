#include <stdio.h>

int main()
{
	long long int arr[100000];
	arr[1] = 3;
	arr[0] = 1;
 	arr[2] = 7;
 	int i = 2,n;
 	while(arr[i]<1e10)
 	{
  		arr[i+1] = 2*arr[i] + arr[i-1];
  		i++;                  
 	}
	scanf("%d",&n);
	printf("%lld\n",arr[n]);
	return 0;
}
