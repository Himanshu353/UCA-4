#include<iostream>
using namespace std;
int main()
{
	int n,i,j=0;
	cout<<"Enter the no. of elements in the array"<<"\n";
	cin>>n;
	int a[n];
	cout<<"Enter the elements"<<"\n";
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(i=1;i<n;i++)
	{
		if(a[i]!=a[j])
		{
			j++;
			a[j]=a[i];
		}
	}
	for(i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
	return 0;
}
