/*
 * C Program to Input Few Numbers & Perform Merge Sort on them using Recursion
 */
 
#include <stdio.h>
 
void mergeSort(int [], int, int, int);
void partition(int [],int, int);
 
int main()
{
    int list[50];
    int i, size;
 
    printf("Enter total number of elements:");
    scanf("%d", &size);
    printf("Enter the elements:\n");
    for(i = 0; i < size; i++)
    {
         scanf("%d", &list[i]);
    }
    partition(list, 0, size - 1);
    printf("After merge sort:\n");
    for(i = 0;i < size; i++)
    {
         printf("%d   ",list[i]);
    }
 
   return 0;
}
 void merge(long long int A[],long long int low,long long int mid,long long int high,long long int n)
{
 long long int i,l,m,k,temp[n];
 i=low;m=mid+1;l=low;
 while(l<=mid && m<=high)
 {
        if(A[l]<=A[m])
        {
         temp[i]=A[l];
         i++;l++;
        }
        else
        {
         temp[i]=A[m];
         m++;i++;
        }
 }
 if(l>mid)
 {
        for(k=m;k<=high;k++){
         temp[i]=A[k];
         i++;
        }
 }
 else
 {
        for(k=l;k<=mid;k++)
        {
         temp[i]=A[k];
         i++;
        }
 }
 for(k=low;k<=high;k++)
        A[k]=temp[k];
}
void partition(long long int A[],long long int LB,long long int UB,long long int N)
{
 long long int mid;
 if(LB<UB)
 {
        mid=(UB+LB)/2;
        partition(A,LB,mid,N);
        partition(A,mid+1,UB,N);
        merge(A,LB,mid,UB,N);
 }
}
int main()
{
 int t;
 scanf("%d",&t);
 while(t--)
 {
        long long int N,i;
        scanf("%lld",&N);
        char NAME[10000];
        long long int P_R[N],SUM=0;
        for(i=0;i<N;i++)
                scanf("%s%lld",NAME,&P_R[i]);
        partition(P_R,0,N-1,N);
        for(i=0;i<N;i++)
        {
         if((i+1)-P_R[i]<0)
                SUM=SUM+((-1)*((i+1)-P_R[i]));
         else
                SUM=SUM+((i+1)-P_R[i]);
        }
        printf("%lld\n",SUM);
 }
 return 0;
}
