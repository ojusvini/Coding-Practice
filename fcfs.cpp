#include<stdio.h>

int main()
{
 int a[20],n,i,t=0;

 printf("Enter disk head pointer's position:");
 scanf("%d",&a[0]);
 printf("\nEnter number of requests:");
 scanf("%d",&n);
 printf("\nEnter the disk queue with requests for I/O to blocks on cylinders in request order : \n");
 for(i=1;i<=n;i++)
 {
  scanf("%d",&a[i]);
 }
 for(i=0;i<n;i++)
 {
  if(a[i]<a[i+1])
  t+=(a[i+1]-a[i]);
  else
  t+=(a[i]-a[i+1]);
 }
 printf("\nThe Processing order is :-\n");
 for(i=1;i<=n;i++)
 printf("\t%d",a[i]);
 printf("\n\n Total Disk Head Movements are : %d",t);
}
