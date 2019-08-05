#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n,i;
	printf("Enter the no. of elements\n");
	scanf("%d",&n);
	int *arr=(int*)malloc(n*sizeof(int));
	printf("Enter the elements\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	int max1=-99999,max=0;
	for(i=0;i<n;i++)
	{
		max+=arr[i];
		if(max1<max)
		{
			max1=max;
		}
		if(max<0)
		{
			max=0;
		}
	}
	printf("The Maximum Sum is %d",max1);
}
