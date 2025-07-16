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
void display(Node* &head)
{
    Node* temp=head;
    while(temp!=NULL)
    {
        cout<<temp->value<<" ";
        temp=temp->next;
    }
}
void insertatLast(Node* &head,int element)
{
Node* temp=head; 
Node* newelement=new Node(element);
while(temp->next!=NULL)
{
temp=temp->next;
}
temp->next=newelement;
}


void updateK(Node* &head,int k,int newvalue)
{
    int count=1;
    Node* temp=head;
    if(count<=k && temp!=NULL)
    {
        temp=temp->next;
    }
    if(temp->next==NULL)
    {
        return;
    }
    temp->next->value=newvalue;

}
void deletionatstart(Node* &head)
{
    Node* temp=head;
    head=head->next;
   free(temp); //to free memory

}
void deletionatlast(Node* &head)
{
    Node* temp=head;
    while(temp->next->next!=NULL)
    {
        temp=temp->next;
    }//next ka next leke usko null krdia aur then freed up memory
    Node *last=temp->next;
    temp->next=NULL;
    free(last);
    
}
int main()
{
    Node* n1=new Node(10);
    insertatLast(n1,20);
    insertatLast(n1,40);
    insertatLast(n1,40);
    updateK(n1,3,30);
    display(n1);
    deletionatstart(n1);
    display(n1);
    deletionatlast(n1);
    display(n1);
}