#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n,i,element;
	printf("Enter the no. of elements\n");
	scanf("%d",&n);
	int *arr=(int*)malloc(n*sizeof(int));
	printf("Enter the elements\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("Enter the element of which you need to find upper bound\n");
	scanf("%d",&element);
	int l=0,h=n,mid=0;
	while(l<h)
	{
		mid=(l+h)/2;
		if(arr[mid]<=element)
		{
			l=mid+1;
		}
		else
		{
			h=mid;
		}
	}
	printf("The Upper Bound of %d is %d",element,mid);
	return 0;
}
