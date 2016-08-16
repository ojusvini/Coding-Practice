#include<stdio.h>
int main()
{
    int t,a,b;
    scanf("%d",&t);
    while(t--)
    {
       scanf("%d%d",&a,&b);
       if(a%2==1 && b%2==1)
           printf("Ramesh\n");
       else
           printf("Suresh\n");
    }    
    return 0;
}
