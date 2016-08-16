#include<stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for( int i=0;i<n;i++)
    scanf("%d",&arr[i]);
    int k,i,j;
   	scanf("%d",&k);
    int max=arr[0];
    for(i=1;i<k;i++)
    {
        if(arr[i]>max)
            max=arr[i];
    }
    if(k!=n)
    printf("%d ",max);
    else printf("%d",max);
    for(i=k;i<n;i++)
    {
        if(arr[i-k]==max)
        {max=-1;
        for(j=i-k+1;j<=i;j++)
        if(arr[j]>max)
        max=arr[j];
        if(i!=n)
        printf("%d ",max);
    	else printf("%d",max);

        }
        else{
        if(arr[i]>max)
        {   max=arr[i];

        if(i!=n)
        printf("%d ",max);
    	else printf("%d",max);
        }
        else
        {
        if(i!=n)
        printf("%d ",max);
    	else printf("%d",max);
        }
    }
	}
	printf("\n");
    return 0;
}
