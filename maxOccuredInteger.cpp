#include<stdio.h>
#include<stdlib.h>
int maxElement(int *a,int n,int *index)
{
	int i,max=a[0];
	for(i=0;i<n;i++)
	{
		if(a[i]>max)
		{
			max=a[i];
			(*index)=i;
		}
	}
	return max;
}
int main()
{
	int i,n,j;
	printf("Please enter the no. of indexes\n");
	scanf("%d",&n);
	int *left=(int*)malloc(n*sizeof(int));
	int *right=(int*)malloc(n*sizeof(int));
	printf("Enter the left indexes\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&left[i]);
	}
	printf("Enter the right indexes\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&right[i]);
	}
	int ind;
	int myMax=maxElement(right,n,&ind);
	int *arr=(int*)calloc((myMax+1),sizeof(int));
	for(i=0;i<n;i++)
	{
		for(j=left[i];j<=right[i];j++)
		{
			(arr[j])++;
		}
	}
	int finalAns=maxElement(arr,(myMax+1),&ind);
	printf("The Maximum Occured Integer is %d\n",ind);
}

