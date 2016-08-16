#include<stdio.h>

int tot[100005]; 
long long int phi(long long int n)
{
    long long int i,res=n;
    for(i=2;i*i<=n;i++)
    {
        if(n%i == 0)
            res-=res/i;
        while(n%i == 0)
            n/=i;
    }
    if(n>1)
        res-=res/n;
    return res;
}
 
int main()
{
    long long int t,n,i,k;
    long long int sum,H;
    compute_totient();
    scanf("%lld",&t);
    k = 1;
    while(t--)
    { 	scanf("%lld",&n);
        sum=0;
        for(i=1;i<=n;i++) sum += (i- phi[i]);
        printf("Case %lld: %lld\n",k++,sum);
    }
    return 0;
} 
