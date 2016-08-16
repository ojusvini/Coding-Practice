#include <stdio.h>
int search(int a[],int k,int n){
	int i;
	for(i = 0 ; i < n ; i++) {
		if(a[i]==k)
		return 1;
	}
	return 0;
}
int main()
{
	int n,ff,i,m,j,f[10000],k;
	scanf("%d",&n);
	int a[n];
	int t = 0;
	for(i = 0 ; i < n;i++) {
		scanf("%d%d",&a[i],&m);
		
		for(j = 0 ; j < m ; j++)
		{
			scanf("%d",&ff);
			if(search(a,ff,i)) continue;
			else if(search(f,ff,t)) continue;
			else
			{
				f[t++]=ff;
			}
			
		}
			
	}
	k = t;
	for(i = 0 ; i < k;  i++)
	{
		for(j = 0 ; j < n ; j++)
		if(f[i]==a[j])
		t--;
	}
	printf("%d\n",t);
	return 0;
}

