#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n,i,j,x,y;
	printf("Enter the no. of rows/columns for matrix\n");
	scanf("%d",&n);
	x=n,y=n;
	int **a=(int **)malloc(n*sizeof(int*));
    for (i=0;i<n;i++)
    {
    	a[i]=(int*)malloc(n*sizeof(int));
	}
	printf("Enter the elements for the matrix\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<x/2;i++)
	{
		for(j=i;j<y-1-i;j++)
		{
			int temp=a[i][j];
			a[i][j]=a[x-1-j][i];
			a[x-1-j][i]=a[x-1-i][y-1-j];
			a[x-1-i][y-1-j]=a[j][y-1-i];
			a[j][y-1-i]=temp;
		}
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
	return 0;
}

