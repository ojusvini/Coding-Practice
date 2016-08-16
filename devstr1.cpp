		#include<stdio.h>
		 
		  int  main()
		    {
		    
		    int t;
		    scanf("%d",&t);
		    while(t--)
		    {
		    int i,ans,n,k,cnt1,cnt0,ans1;	
		    scanf("%d%d",&n,&k);
		    char arr[n];
		    scanf("%s",arr);
		    
		    ans=0;
		    
		    if(k==1)
		    {
		    for(i=0;i<n;i=i+2)
		    {
		    if(arr[i]!='0')ans++;
		    }
		    for(i=1;i<n;i=i+2)
		    {
		    if(arr[i]!='1')ans++;
		    }
		    
		    ans1=0;
		    
		    for(i=0;i<n;i=i+2)
		    {
		    if(arr[i]!='1')ans1++;
		    }
		    
		    for(i=1;i<n;i=i+2)
		    {
		    if(arr[i]!='0')ans1++;
		    }
		    
		    if(ans<ans1)
		    {
		    for(i=0;i<n;i=i+2)
		    arr[i]='0';
		    for(i=1;i<n;i=i+2)
		    arr[i]='1';
		    }
		    
		    else 
		    {
		    ans=ans1;
		    for(i=0;i<n;i=i+2)
		    arr[i]='1';
		    for(i=1;i<n;i=i+2)
		    arr[i]='0'; 
		    }
		    }
		    
		    
		    else
		    {
		    	
		    for(i=0;i<n-1;i++)
			{
		if(arr[i]=='1')
		{
		cnt1=0;
		 
		while(cnt1<=k&&i<n&&arr[i++]=='1')
		 
		cnt1++;
		 
		i--;
		 
		if(cnt1>k)
		{
			ans++;
			
		if (i<n-1&&arr[i+1]=='1')
		arr[i]='0';
		 
		else 
		arr[i-1]='0';
		 
		}
		 
		i--;
		 
		} else
		{
		cnt0=0;
		 
		while(cnt0<=k&&i<n&&arr[i++]=='0')
		cnt0++;
		 
		/*printf("%d\n",i);*/
		 
		i--;
		if(cnt0>k)
		{
			ans++;
		 
		if(i<n-1&&arr[i+1]=='0')
		 
		arr[i]='1';
		 
		else arr[i-1]='1';
		 
		}
		 
		i--;
		}
		}
		    }  
		    
		    
		    printf("%d\n%s\n",ans,arr);
		    }
		    return(0);
		    }
