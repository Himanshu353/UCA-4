#include<stdio.h>
#include<stdlib.h>
int func(int *a,int n,int mid)
{
	int sum=0,count=1,i;
	for(i=0;i<n;i++)
	{
		if(sum+a[i]>mid)
		{
			count++;
			sum=a[i];
		}
		else
		{
			sum+=a[i];
		}
	}
	return count;
}
int main()
{
	int mid,stu,l,h,n,i,s=0,x;
	printf("Enter the no. of Books\n");
	scanf("%d",&n);
	int *arr=(int*)malloc(n*sizeof(int));
	printf("Now, enter the no. of pages for each book\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("Enter the no. of Students\n");
	scanf("%d",&x);
	int max=arr[0];
	for(i=0;i<n;i++)
	{
		if(arr[i]>max)
		{
			max=arr[i];
		}
	}
	for(i=0;i<n;i++)
	{
		s+=arr[i];
	}
	l=max;
	h=s;
	while(l<h)
	{
		mid=(l+h)/2;
		stu=func(arr,n,mid);
		if(stu<=x)
		{
			h=mid;
		}
		else
		{
			l=mid+1;
		}
	}
	printf("The Answer is %d",l);
	return 0;
}

