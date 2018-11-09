#include <iostream>
#define MAX_SIZE 101

using namespace std;
int A[MAX_SIZE];
int top = -1;  //Empty stack

void push(int x)
{
    if(top == MAX_SIZE -1)
    {
        cout<<"Error : Stack Overflow";
        return;
    }
    else
    {
        top++;
        A[top] = x;
    }
}

 void pop()
 {
     if(top == -1)
     {
         cout<<"Error : Stack Underflow";
     }
     else
     {
     top--;
     }
 }

 void print()
 {
     for(int i=0;i<=top;i++)
     {
         cout<<A[i]<<" ";
     }
 }


int main()
{
    push(2);  //Stack is 2
    push(3);  //Stack is 2 3
    push(4);  //Stack is 2 3 4
    print();
    pop();    //Stack is 2 3
    print();
    return 0;
}
