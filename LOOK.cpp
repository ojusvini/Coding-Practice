#include<stdio.h>
#include<conio.h>
#include<math.h>
#define max 20
#define cymax 199

int i,j,req,ttl_tracks=0,cp,np,cposn,nposn;
int cyposn[max],temp;

void input()
{
 do
 {
  clreol();
  printf("\n Enter the current header position : ");
  scanf("%d",&cposn);
 }while(cposn>cymax || cposn <=0);
 printf("\n Enter the %d I/O Requests : ",req);
 cyposn[0] = cposn;
 for(i=1;i<=req;i++)
  scanf("%d",&cyposn[i]);
}

void LOOK()
{
 int ind = 0;
 for(i=0;i<=req;i++)
 {
  for(j=0;j<req-i;j++)
  {
   if(cyposn[j] > cyposn[j+1])
   {
    temp = cyposn[j];
    cyposn[j] = cyposn[j+1];
    cyposn[j+1] = temp;
   }
  }
 }
 cp=0;
 do
 {
  if(cyposn[cp] == cposn)
   break;
  cp++;
 }while(cp!=req);
 int tmp = cp;
 printf("\nS.No.  Current Position    Next Position   Displacement \n");
 printf("---------------------------------------------------------- \n\n");
 i=0;
 cposn = cyposn[cp];
 do
 {
  if(ind == 0)
  {
   if(cp == 0)
   {
    cp = tmp;
    nposn = cyposn[++cp]; ind = 1;
   }
   else
    nposn = cyposn[--cp];
  }
  else
    nposn = cyposn[++cp];

  printf(" %d\t\t%d\t\t%d\t\t%d\n",++i,cposn,nposn,abs(cposn-nposn));
  ttl_tracks += (abs(cposn-nposn));
  cposn = nposn;
 }while(nposn!=cyposn[req]);
 printf("---------------------------------------------------------- \n\n");
 printf(" Total Tracks Displaced : %d",ttl_tracks);
}

void main()
{
 do
 {
  clrscr();
  printf("\n Enter the number of requests : ");
  scanf("%d",&req);
 }while(req>max || req <=0);
 input();
 LOOK();
 getch();
}
