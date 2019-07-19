#include<stdio.h>
#include<stdlib.h>
#include<iostream>
using namespace std;
int main()
{
	int n,i,j,a,b,r1,r2,c1,c2,count=1;
	cin>>n;
	r1=0;
	r2=n;
	c1=0;
	c2=n;
	int **res=(int **)malloc(n*sizeof(int*)); 
    for (i=0;i<n;i++)
    {
    	res[i]=(int*)malloc(n*sizeof(int));
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			res[i][j]=0;
		}
	}
	cout<<"Before Everything Starts"<<"\n";
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			cout<<res[i][j]<<" ";
		}
		cout<<"\n";
	}
	while((r1<=r2) && (c1<=c2))
	{
		for(i=c1;i<c2;i++)
		{
			res[r1][i]=count++;
		}
	    r1++;
		for(j=r1;j<r2;j++)
		{
			res[j][c2-1]=count++;
		}
		c2--;
		for(a=(c2-1);a>c1;a--)
		{
			res[r2-1][a]=count++;
		}
		r2--;
		for(b=r2;b>=r1;b--)
		{
			res[b][c1]=count++;
		}
		c1++;
	}
	cout<<"After Everything Ends"<<"\n";
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			cout<<res[i][j]<<" ";
		}
		cout<<"\n";
	}
}
