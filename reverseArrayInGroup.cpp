#include<iostream>
using namespace std;
int main()
{
	int arr_size,grp_size,i,j,a;
	cin>>arr_size>>grp_size;
	int arr[arr_size];
	for(i=0;i<arr_size;i++)
	{
		cin>>arr[i];
	}
	for(i=0;i<arr_size;i+=grp_size)
	{
		if((i+grp_size)<=arr_size)
		{
			for(j=0;j<(grp_size/2);j++)
			{
				swap(arr[i+j],arr[i+grp_size-1-j]);
			}
		}
		else
		{
			for(a=0;a<(grp_size/2);a++)
			{
				swap(arr[i+a],arr[i+grp_size-((grp_size/2)+1)-a]);
			}
		}
	}
	for(i=0;i<arr_size;i++)
	{
		cout<<arr[i]<<" ";
	}
}

