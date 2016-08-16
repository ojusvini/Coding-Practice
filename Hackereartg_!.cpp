#include <iostream>
#include <deque>
using namespace std;
int main(){
	int n,c = 0,cur,j = 0;
	deque <int> q;
	scanf("%d",&n);
	int a[n],b[n];
	for(int i=0;i<n;i++) {
		scanf("%d",&a[i]);
		q.push_back(a[i]);
	}
	for(int i=0;i<n;i++)
		scanf("%d",&b[i]);
	while(q.empty()==false){
		cur = q.front();
		q.pop_front();
		if(cur == b[j]){
			c++;
			j++;
		}else {
			q.push_back(cur);
			c++;
		}
	}
	printf("%d\n",c);
}
