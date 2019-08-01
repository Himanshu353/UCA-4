#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n,w,l,mid=0,i;
	printf("Enter the no. of trees\n");
	scanf("%d",&n);
	printf("Enter the amount of wood ordered\n");
	scanf("%d",&w);
	printf("Enter the minimum length of trees reqd. for cutting\n");
	scanf("%d",&l);
	int *H=(int*)malloc(n*sizeof(int));
	int *R=(int*)malloc(n*sizeof(int));
	printf("Enter the initial height and rate of growth acc. to the no. of trees\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&H[i]);
		scanf("%d",&R[i]);
	}
	int left=0,right=w,h=0,sum=0;
	while(left<right)
	{
		sum=0;
		mid=(left+right)/2;
		for(i=0;i<n;i++)
		{
			h=H[i]+(R[i]*mid);
			if(h>=l)
			{
				sum+=h;
				if(sum>w)
				{
					break;
				}
			}
		}
		if(sum>=w)
		{
			right=mid;
		}
		else
		{
			left=mid+1;
		}
	}
	printf("No. of Months required to complete the order of wood are %d",left);
	return 0;
}
