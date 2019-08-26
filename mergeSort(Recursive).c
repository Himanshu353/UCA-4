#include<stdio.h>
#include<stdlib.h>
void merge(int* a,int l,int mid,int r,int* aux)
{
    int i=l,j=mid,k;
    for(k=l;k<=r;k++)
    {
        if(i>mid-1)
        {
        	aux[k]=a[j++];
        }
        else if(j>r)
        {
            aux[k]=a[i++];
        }
        else if(a[i]<=a[j])
        {
            aux[k]=a[i++];
        }
        else
        {
            aux[k]=a[j++];
        }
    }
    for(k=l;k<=r;k++)
    {
        a[k]=aux[k];
    }
}
void mergeSort(int* a,int l,int r,int* aux)
{
    int mid=0;
    if(r<=l)
    {
        return;
    }
    else
    {
        mid=(l+r)/2;
    }
    mergeSort(a,l,mid,aux);
    mergeSort(a,mid+1,r,aux);
    merge(a,l,mid+1,r,aux);
}
void print(int* a,int n)
{
	int i;
    printf("The Resultant Array is :-\n");
	for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
}
int main()
{
    int n,i;
    printf("Enter the no. of elements\n");
    scanf("%d",&n);
    int *a=(int*)malloc(sizeof(int)*n);
    printf("Enter the elements\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int *aux=(int*)malloc(sizeof(int)*n);
    mergeSort(a,0,n-1,aux);
    print(aux,n);
    return 0;
}
