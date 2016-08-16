#include <stdio.h>
#include <string.h>
 
int main()
{
  int t,len,i,c;
  char text[100];
  scanf("%d",&t);
  while(t--)
  {
    scanf("%s",&text);
    len = strlen(text);
    c = 0;
    for(i = 0; i < len; i++)
    {
      switch(text[i]) {
		case 'A':
		case 'D':
		case 'O':
		case 'P':
		case 'Q':
		case 'R': ++c;
				  break;
		case 'B': c+=2;
      }
    }
    printf("%d\n",c);
  }
  return 0;
} 
