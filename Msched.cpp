#include <iostream>
#include <utility>
#include <algorithm>
#include <stdio.h>
using namespace std;
int main()
{
 int n;
 scanf("%d",&n);
 int i,max=-1,k;
 bool p[10009]={0};
 pair <int , int> j[n+9];
 for(i=0;i<n;i++)
 {
  scanf("%d",&j[i].first);
  scanf("%d",&j[i].second);
 }
 sort(j,j+n);
 int total=0,temp;
 for(i=n-1;i>=0;i--)
 {
     temp=j[i].second;
     while(temp)
     {
         if(!p[temp]){
  			 p[temp]=1;
   			total+=j[i].first;
   			break;
         }
        else temp--;
     }
 }
 printf("%d\n",total);
 return 0;
}
