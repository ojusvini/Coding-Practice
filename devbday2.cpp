#include <iostream>
#include <algorithm>
#include <string.h>
using namespace std;
 
int main() {
	// your code goes here
	int t,i;
	cin>>t;
	while(t--)
	{
		int a[26];
		int sum=0,len;
		memset(a,0,sizeof(a));
		string s;
		cin>>s;
		len=s.length();
		int b[26];
		memset(b,0,sizeof(b));
		for(i=0;i<len;i++)
		{
		   a[s[i]-'a']++;
		   b[s[i]-'a']++;
 
		}
 
		sort(b,b+26);
		if(b[25]<=len-b[25]+1)
		{
			char arr[len];
			memset(arr,0,sizeof(arr));
			int j=0;
			for(i=0;i<26;i++)
			{
 
				while(a[i]!=0)
				{
					if(arr[j]==0)
					{
					arr[j]=i+'a';
 
					j=(j+2)%len;
					}
					else
					{
 
						while(arr[(j+1)%len]!=0)
						{j=(j+1)%len;}
						arr[j]=i+'a';
						j=(j+2)%len;
					}
					a[i]--;
				}
			}
			cout<<arr<<endl;
		}   
		else
		   cout<<"-1"<<endl;
	}
	return 0;
}
