#include <iostream>
#include <vector>
#include <stdlib.h>
#include <algorithm>
#include <string.h>

using namespace std;

int main()
{
	int x,mun,i,n1,j,p,t,n,k,m,l,r,c;
	long long int sum,sum1;

	scanf("%d", &t);
	
	while (t--) {
		scanf("%d %d %d", &n, &k, &m);
		int input[n];
		int cost[n];
		
		sum = 0;
		for (i = 0; i < n; i++) {
			scanf("%d", &input[i]);
			sum += input[i];
			cost[i] = 100000;
		}
		
		vector<int> arr[n];
		
		for (i = 0; i < m; i++) {
			scanf("%d %d %d", &l, &r, &c);
			if (c <= k) {
				arr[--l].push_back(c);
				arr[--r].push_back(-1*c);
			}
		}
		
		int h[250];
		memset(h, 0, sizeof(h));
		
		for (i = 0; i < n; i++) {
			n1 = arr[i].size();
			mun = 100000;
			for (j = 0; j < n1; j++) {
				x = arr[i][j];
				if(arr[i][j]<0) {
					x = x*-1;
					mun = min(mun, x);
					h[x]--;
				}
				else {
					mun = min(mun, x);
					h[x]++;
				}
			}
			for(p = 0; p < 200; p++) {
				if (h[p]>0) {
					mun = min(mun, p);
					break;
				}
			}
			cost[i] = mun;
		}
		
		long long int b[k+2];
		memset(b, 0, sizeof(b));
		
		vector<int>z;
		z.push_back(0);
		sum1 = 0;
		
		if (cost[0] <= k) {
			if (input[0] < 0) {
				b[cost[0]] = -1*input[0];
				sum1 =  -1*input[0];
				z.push_back(cost[0]);
			}	
		}
		
		for (i = 1; i < n; i++) {
			l = z.size();
			if (a[i] < 0) {
				for(j = l-1; j >= 0; j--) {
					if (z[j]+cost[i] <= k) {
						if(b[z[j]+cost[i]] == 0)
							z.push_back(z[j]+cost[i]);
						b[z[j]+cost[i]] = max(b[z[j]+cost[i]], b[z[j]]+input[i]*-1);
						sum1 = max(b[z[j]+cost[i]], sum1);
					}
				}
				sort(z.begin(),z.end());
			}	
		}
		printf("%lld\n", sum+sum1);
	}
	
	return 0;
}
