#include <stdio.h>
#include <math.h>

int main()
{
	long long int N;
	int t,k;
	int i,min,temp;
	scanf("%d",&t);
	while(t--)
	{
	  scanf("%lld",&N);
	  i = ceil(log2(N));
	  for(k=0;k<=i;k++)
	  {
	    temp = N>>k;
	    if(temp&1==1)
	    {
	      min = k;
	      break;
	    }
	  }
	    printf("%lld %d\n",(long long int)pow((double)2,i),i-min);
	}
	return 0;
}
