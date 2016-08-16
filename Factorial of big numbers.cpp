#include<stdio.h>

int main()
{
    int n,i,k,j,ca;
    k=0;
	ca=0;
	int a[1000]={1};
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=0;j<=k;j++)
         {
            a[j]=a[j]*i+ca;
            ca=a[j]/10;
            a[j]=a[j]%10;
         }
         while(ca)
         {
             k++;
             a[k]=ca%10;
             ca/=10;
         }
     }
     for(i=k;i>=0;i--)
        printf("%d",a[i]);
    printf("\n");
    return 0;
}
