#include <iostream>
#include<stack>

using namespace std;

void Reverse(char A[],int n)
{
    stack<char> S;
    for(int i=0;i<n;i++)
    {
        S.push(A[i]);
    }
    for(int j=0;j<n;j++)
    {
        A[j]= S.top();
        S.pop();
    }
}

int main()
{
    char A[51];
    int i=0;
    cout<<"Enter a String";
    cin>>A;
    while(A[i]!='\0')
    {
        i++;
    }
    Reverse(A,i);
    cout<<"Output"<<" "<<A;

    return 0;
}
