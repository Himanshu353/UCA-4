#include<stdio.h>
#include<stdlib.h>
struct interval
{
	int start;
	int end;
};
void deleteFromArray(struct interval *arr,int *n,int pos)
{
	int i;
	for(i=pos;i<(*n);i++)
	{
		arr[i]=arr[i+1];
	}
	(*n)--;
}
int cmp(const void* a,const void* b)
{
	struct interval *ia=(struct interval*)a;
	struct interval *ib=(struct interval*)b;
	return (ia->start-ib->start);
}
int main()
{
	int n,i,s,e;
	printf("Enter the no. of intervals\n");
	scanf("%d",&n);
	struct interval *arr=(struct interval*)calloc(n,sizeof(struct interval));
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
	int k=0;
	for(i=0;i<n-1;i++)
	{
		if(arr[i+1].start<=arr[i].end)
		{
			if(arr[i].end<arr[i+1].end)
			{
				arr[i].end=arr[i+1].end;
			}
			deleteFromArray(arr,&n,i+1);
			i--;
		}
	}
	for(i=0;i<n;i++)
	{
			printf("(%d,%d)\n",arr[i].start,arr[i].end);
	}
}
