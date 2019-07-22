#include<stdio.h>
#include<stdlib.h>
struct interval
{
	int start;
	int end;
};
int cmp(const void* a,const void* b)
{
	struct interval *ia=(struct interval*)a;
	struct interval *ib=(struct interval*)b;
	return (ia->start-ib->start);
}
int main()
{
	int n,i,s,e;
	printf("Enter th no. of intervals\n");
	scanf("%d",&n);
	struct interval arr[n];
	for(i=0;i<n;i++)
	{
		printf("Enter the %d starting interval\n",i);
		scanf("%d",&s);
		printf("Enter the %d ending interval\n",i);
		scanf("%d",&e);
		arr[i].start=s;
		arr[i].end=e;
	}
	qsort(arr,n,sizeof(arr[0]),cmp);
	for(i=0;i<n-1;i++)
	{
		if(arr[i+1].start<arr[i].end)
		{
			if(arr[i].end>arr[i+1].end)
			{
				arr[i].end=arr[i].end;
			}
			else
			{
				arr[i].end=arr[i+1].end;
				arr[i+1].start=0;
			}
			arr[i].start=arr[i].start;
		}
	}
	for(i=0;i<n;i++)
	{
		if(arr[i].start!=0)
		{
			printf("Start is %d\n",arr[i].start);
		    printf("End is %d\n",arr[i].end);
		}
	}
}
