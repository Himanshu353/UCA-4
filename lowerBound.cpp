#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n,i,element;
	printf("Enter the no. of elemnts\n");
	scanf("%d",&n);
	int *arr=(int*)malloc(n*sizeof(int));
	printf("Enter the elements\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("Enter the element of which you need to find lower bound\n");
	scanf("%d",&element);
	int l=0,h=n,mid=0;
	while(l<h)
	{
		mid=(l+h)/2;
		if(arr[mid]>=element)
		{
			h=mid;
		}
		else
		{
			l=mid+1;
		}
	}
	printf("The Lower Bound of %d is %d",element,mid);
	return 0;
}
