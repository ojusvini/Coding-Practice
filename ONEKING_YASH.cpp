#include<bits/stdc++.h>
using namespace std;

int main() {
	int t,n;
	scanf("%d",&t);
	while(t--)
	{
		int l,r,c=0,p=-1;
		scanf("%d",&n);
		vector<pair<int,int> >v;
		for(int i=0;i<n;i++)
		{	scanf("%d%d",&l,&r);
			v.push_back(make_pair(l,r));}	
			int l1,r1;
		sort(v.begin(),v.begin()+n);
		for(int i=0;i<n;)
		{	l1 = v[i].first;p=v[i].second;
			c++;
			while(1)
			{	i++;
				if(i==n)
					break;
				l1=v[i].first;
				//printf("%d %d\n",l1,p);
				if(l1>p)
				break;
				if(p>v[i].second)
				p = v[i].second;
			}
		}
		printf("%d\n",c);
	}
	return 0;
}
