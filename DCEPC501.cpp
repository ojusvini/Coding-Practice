#include <stdio.h>
#include<string.h>
#define MAX 100009

long long int dp[MAX],A[MAX];

long long int max(long long int a,long long int b){
	return b>a?b:a;
}
int main()
{	int t,i,j;
   scanf("%d",&t);
   while(t--)
   {	int n;
       scanf("%d",&n);
       memset(A,0,sizeof A);
       for(int i=0; i<n; i++) scanf("%d",&A[i]);
       memset(dp,0,sizeof dp);
      for(int i=n-1; i>=0; i--)
        dp[i]=max(A[i]+dp[i+2],max(A[i]+A[i+1]+dp[i+4],A[i]+A[i+1]+A[i+2]+dp[i+6]));
           
       printf("%lld\n",dp[0]);
   }
   return 0;
}
