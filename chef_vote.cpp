#include <iostream>
#include<stdio.h>
using namespace std;
 
int main()
{
	int t, n,c[60],b[60],sum,j=1;
	scanf("%d", &t);
	while(t--)
	{
		scanf("%d", &n);
		int f = 0;
		for(int i=0;i<n;i++)
		scanf("%d", &c[i]);
		
		for(int i=0;i<n;i++)
		{	if(c[i]>=n)
			{
			printf("-1\n");
//			break;
			f = 1;
			}
			sum+=c[i];
		}
		if(sum == n)
		{	j = 1;
			for(int i=0;i<n;i++)
			{ while(c[i])
				{ b[i+j]=i;
					j=( j + 1 )% n;
				 c[i]--;
				}
 
			}
			for(j=0;j<n;j++)
			printf("%d",b[j]);	
		}
		else
		{		printf("-1\n");
 
		}
 
	}	
	return 0;
}
