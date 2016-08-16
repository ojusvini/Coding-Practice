#include <iostream>
#include <cstdio>

using namespace std;

int main()
{	int n1,n2,n3,n,d,ans,f;
	ans = 0;
	n1 = 0;
	n2 = 0;
	n3 = 0;
	scanf("%d",&f);
	while(f-- > 0) {
		scanf("%d/%d",&n,&d);
		if(n == 3)
		n1++;
		else if(d==2)
		n2++;
		else n3++;
	}
	
	ans = n1;
	n3= n3-n1;
	ans=ans+ (n2/2);
	
	if(n2%2)
	{
		ans++;
		n3=n3-2;
	}

	if(n3>0)
	{
		ans = ans + (n3/4);
		if(n3%4)
		ans++;
	}
	printf("%d\n",ans+1);
	
return 0;
}
