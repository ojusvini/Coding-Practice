#include<stdio.h>
#include<string.h>

void push(char);
void pop();

char stack[400];
int top=0;

int main()
{
    int len, t,i;
    char expr[400];

    scanf("%d",&t);

    while(t--)
    {
        scanf("%s",expr);
        len = strlen(expr);

        for(i=0;i<len;i++)
        {
            if(expr[i]=='+'||expr[i]=='-'||expr[i]=='*'||expr[i]=='/'||expr[i]=='^')
                push(expr[i]);

            else if(expr[i]==')')
            {
                pop();
            }

            else if(expr[i]=='(')
                continue;

            else
                printf("%c",expr[i]);
        }
        printf("\n");
    }

    return 0;
}

void pop()
{
    if(top==-1)
        return;
    else
    {
        printf("%c",stack[top]);
        top--; 
    }
}

void push(char x)
{
    if(top==400)
        return;
    else
    {
        stack[++top]=x;
    }
}
