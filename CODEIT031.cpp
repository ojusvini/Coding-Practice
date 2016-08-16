#include<stdio.h>
#define s(n) scanf("%d",&n);

int main(){
    int test;
    int d,m,y,f;
    char days[][30]={"Sunday","Monday","Tuesday","Wednesday","Thursday","Friday","Saturday"};
    scanf("%d",&test);
    int t[] = {0, 3, 2, 5, 0, 3, 5, 1, 4, 6, 2, 4};
  	
    while(test--){
        s(d);s(m);s(y);
        y -= m < 3;
   		f=(y + y/4 - y/100 + y/400 + t[m-1] + d) % 7;
        printf("%s\n",days[f]);
    }
    return 0;
}
