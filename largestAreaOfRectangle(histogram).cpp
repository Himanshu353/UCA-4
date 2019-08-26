#include<iostream>
#include<stack>
#include<stdlib.h>
using namespace std;
int main()
{
    int i,n,max=0;
    cout<<"Enter the no. of elements"<<"\n";
    cin>>n;
    int *arr=(int*)malloc(n*sizeof(int));
    cout<<"Enter the elements"<<"\n";
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    stack<int> s;
    for(i=0;i<n;i++)
    {
        if(s.empty() || arr[i]>arr[s.top()])
        {
            s.push(i);
        }
        else
        {
            while(!s.empty() && arr[i]<arr[s.top()])
            {
                int x=arr[s.top()];
                s.pop();
                int dist=s.empty()?i:(i-s.top()-1);
                int area=dist*x;
                if(max<area)
                {
                    max=area;
                }
            }
            s.push(i);
        }
    }
    while(!s.empty())
    {
        int x=arr[s.top()];
        s.pop();
        int dist=s.empty()?n:(n-s.top()-1);
        int area=dist*x;
        if(max<area)
        {
            max=area;
        }
    }
    cout<<"The maximum area possible is "<<max;
}
