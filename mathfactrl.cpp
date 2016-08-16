#include<stdio.h>

int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {/*  9 8
x     7 6
---------
    54 48
63  56
=========
63 110 48
~~~~~~~~~ (mod 10)
        8 48 % 10
     4    (110+4)%10
74        63+11
=========
7 4  4  8*/
        int num;
        int i,k=0,j,carry=0,arr[1000]={1},n;
        scanf("%d%d",&num,&n);      
        
        for(i=1;i<=num;i++)
        {
            for(j=0;j<=k;j++)
             {
                arr[j]=arr[j]*i+carry;
                carry=arr[j]/10;
                arr[j]=arr[j]%10;
             }
             
             while(carry)
             {
                 k++;
                 arr[k]=carry%10;
                 carry/=10;
             }
         }
         for(i=k;i>=0;i--)
            printf("%d",arr[i]);
        printf("\n");
    }
    return 0;
}
