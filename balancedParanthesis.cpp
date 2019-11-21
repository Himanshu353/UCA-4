#include<iostream>
#include<stack>
using namespace std;
int main()
{
    stack<char> s;
    string str;
    cout<<"Enter the paranthesis to check\n";
    cin>>str;
    int i,f=0;
    for(i=0;str[i];i++)
    {
        if(str[i]=='('||str[i]=='{'||str[i]=='[')
        {
		s.push(str[i]);
	}
        else if(s.empty())
        {
            f=1;
            break;
        }
        else if((str[i]==')' && s.top()=='(')||(str[i]=='}' && s.top()=='{')||(str[i]==']' && s.top()=='['))
        {
            s.pop();
        }
        else
        {
                f=1;
                break;
        }
    }
    if(f==1||!s.empty())
    {
        cout<<"Imbalanced\n";
    }
    else
    {
        cout<<"Balanced\n";
    }
    
}
