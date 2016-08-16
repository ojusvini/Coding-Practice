#include <stdio.h>

int main() {
  int t,i;
  scanf("%d",&t);
  int a,b;
  int sum; 
  while(t--){
    scanf("%d%d",&a,&b);
    sum = a+b;
    printf("%d\n",sum);
  }
  return 0;
}

