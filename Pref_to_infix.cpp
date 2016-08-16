#include <iostream>
#include <stack>
#include <stdio.h>
#include <cctype>
using namespace std;

int pre(char a){
	switch(a){
		case '+':
		case '-': return 1;
		case '/' :
		case '*':return 2;
		case '^': return 3;
	}
	return -1;
}
int isOperator(char c){
	if(c=='+'||c=='-'||c=='*'||c=='/'||c=='^')
	return 1;
	else return 0;
}
int main(){
	char ch[409];// ="((a+t)*((b+(a+c))^(c+d)))";
	int i=0,t;
	scanf("%d",&t);
	while(t--){
		scanf("%s",ch);
		stack <char> s;
		i = 0;
		while(ch[i]!='\0'){
			if(isalpha(ch[i])) cout<<ch[i];
			else if(isOperator(ch[i])){
				if(s.empty() || pre(s.top()) < pre(ch[i] )){
					s.push(ch[i]);
				}
				else {
					while(!s.empty() && s.top() >= pre(ch[i]) ){
						cout<<s.top();
						s.pop();
					}
					s.push(ch[i]);
				}
			}
			else if(ch[i]=='(') s.push(ch[i]);
			else if(ch[i]==')'){
				while(!s.empty() && s.top()!='('){
					cout<<s.top();
					s.pop();	
				}
				s.pop();
			}
			i++;
		}
		while(s.empty()==false){
			cout<<s.top();
			s.pop();
		}
		cout<<"\n";
	}
	return 0;
}
