#include<bits/stdc++.h>
using namespace std;
int jsonParse(char* input1)
{
    int max=-1;
    stack<char> st;

    for(int i=0;input1[i]!='\0';i++)
    {
        if(input1[i]=='[' || input1[i] == '{' || input1[i]=='(')
        {
            st.push(input1[i]);
        }

        else if(input1[i]==']' || input1[i] == '}' || input1[i]==')')
        {
        	int x=st.size();
            if(max < x)
            {
                max=x;
            }
            st.pop();
        }
    }
    return max;
}

int main()
{
    char c[100]="{{{{}}{}}}";
    cout<<jsonParse(c)<<endl;
}
