#include <iostream>
#include <stack>
using namespace std;
int main(){
	stack <int> s;
	int n,q,a;
	scanf("%d",&n);
	while(n--){
		scanf("%d",&q);
		if(q==1){
			if(s.empty()) {
				printf("No Food\n");
			}
			else {
				printf("%d\n",s.top());
				s.pop();
			}
		}
		else if(q==2){
			scanf("%d",&a);
			s.push(a);
		}
	}
	return 0;
}
