# include <iostream>
# include <vector>
# include <utility>
# include <algorithm>
# include <cstdio>

using namespace std;

int main()
{
	int n, i;
	pair<int,int> p[7];
	vector<pair<int,int> > v;
//	printf("Enter the no of elements in the array: ");
//	scanf("%d", &n);
	n = 7;
	int x[7]={0,2,1,2,3,0,3};
	int y[7]={3,2,1,1,0,0,3};
/*	int x[3] = {2,2,2};
	int y[3] = {3,2,4};*/	
/*	for (i = 0; i < n; i++) {
		scanf("%d", &x[i]);
		scanf("%d",&y[i]);
	}*/
	for (i = 0; i < n; i++) {
		p[i] = make_pair(x[i],y[i]);		
	}
	sort(p,p+n);
	for (i = 0; i < n; i++) {
		printf("%d\t", p[i].first);
		printf("%d\n",p[i].second);
	}
}
