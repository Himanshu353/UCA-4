#include<iostream>
#include<vector>
using namespace std;
int func(vector<int> arr,int M)
{	
    int maximum=M,s=arr.size(),left=0,right=0,l,r,max=0,j=0;
    int abc[10];
    while(right<s)
    {
        if(arr[right]==1)
        {
            right++;
        }
        else if(arr[right]==0 && M)
        {
            right++;
            M--;
        }
        else
        {
            if((right-left)>max)
            {
                max=right-left;
            }
            while(arr[left]!=0)
            {
                left++;
            }
            left++;
            if(M<maximum)
            {
                M++;
            }
            if(left>right)
            {
                right=left;
            }
    }
}
	if((right-left)>max)
        {
	    max=right-left;
	}
	return max;
}
int main()
{
    int n,i,m,e;
    cout<<"Enter the no.of elements"<<"\n";
    cin>>n;
    vector<int> v;
    cout<<"Enter the elements"<<"\n";
    for(i=0;i<n;i++)
    {
    	cin>>e;
    	v.push_back(e);
	}
    cout<<"Enter the no. of zeroes which can be replaced by 1"<<"\n";
    cin>>m;
    int b=func(v,m);
    cout<<"The maximum continous series of 1's is "<<b<<"\n";
    return 0;
}
