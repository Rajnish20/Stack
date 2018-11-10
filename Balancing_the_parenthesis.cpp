#include <iostream>
#include<string>
#include<stack>

using namespace std;

void check(string exp,int n)
{
    int i;
    stack<char> S;
    for(i=0;i<n;i++)
    {
        if(exp[i]=='(' || exp[i]=='{' || exp[i]=='[')
            {
               S.push(exp[i]);
            }
            else if(exp[i] == ')' && S.top() == '(')
            {
                S.pop();
            }
            else if(exp[i] == '}' && S.top() == '{')
                {
                    S.pop();
                }
            else if(exp[i] == ']' && S.top() == '[')
            {
                S.pop();
            }

    }
    if(S.empty())
    {
        cout<<"Expression is balanced";
    }
    else
    {
        cout<<"Expression is unbalanced";
    }
}

int main()
{
    string expression;
    cout<<"Enter a expression";
    cin>>expression;
    check(expression,expression.length());

    return 0;
}
