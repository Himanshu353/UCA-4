#include<iostream>
using namespace std;
int main()
{
	int n,i,j=0;
	cout<<"Enter the no. of elements in array"<<"\n";
	cin>>n;
	cout<<"Enter the array elements"<<"\n";
	int a[n];
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(i=0;i<n;i++)
	{
		if((i<n-2) && (a[i]==a[i+1]) && (a[i+1]==a[i+2]))
		{
			continue;
		}
		else
		{
			a[j++]=a[i];
		}
	}
	for(i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
}

