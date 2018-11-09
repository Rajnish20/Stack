#include <iostream>

using namespace std;

struct node                      //declaring structure of node type
{
    int data;
    node * next;
};
node * Top=NULL;                  //creating a pointer of type node
void push(int x)                  //function to insert node in the list
{
    node * temp = new node();
    temp->data=x;
    temp->next=Top;
    Top=temp;

}
void print()                       //function to print the values in the list
{
    node * temp=Top;
    cout<<"List is :";
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}

void pop()
{
    if(Top == NULL)
    {
        cout<<"Error : Stack Underflow";
        return;
    }
    else
    {
        node * temp = Top;
        Top = Top->next;
        delete temp;
    }
}

int main()
{

   push(1);
   push(3);
   push(2);
   push(3);
   pop();
   print();

return 0;
}
