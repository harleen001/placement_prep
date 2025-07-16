#include <iostream>
using namespace std;
class Node{
    public:
    int value;
    Node* next;
    Node(int data)
    {
        value=data;
        next=NULL;
    }
};
void insertElement(Node* &head, int data)
{
    Node* insertval=new Node(data);
    Node* temp=head;
    while(temp->next!=NULL)
    {
    temp=temp->next;
    }
   temp->next=insertval;
}
void display(Node* head)
{
    Node* temp=head;
    while(temp!=NULL)
    {
        cout<<temp->value<<" "; 
        temp=temp->next;
    }
 
}
void deletealternate(Node* head)
{
    Node* temp=head;
    while(temp!=NULL && temp->next!=NULL)
    {
        Node* remove=temp->next;
        temp->next=temp->next->next;
        delete remove;
        temp=temp->next;
    }
}
int main()
{
Node* n1=new Node(1);
insertElement(n1,2);
insertElement(n1,3);
insertElement(n1,4);
insertElement(n1,5);
insertElement(n1,6);
display(n1);
deletealternate(n1);
display(n1);
}
