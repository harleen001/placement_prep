#include <iostream>
using namespace std;
class Node{
    public:
    int value;
    Node* next=NULL;
    Node(int data)
    {
        value=data;
        next=NULL;
    }
};
void insertatLast(Node* head, int data)
{
    Node* newNode=new Node(data);
    Node* temp=head;
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
     temp->next=newNode;
}
void Display(Node* head)
{
    Node* temp=head;
    while(temp!=NULL)
    {
        cout<<temp->value<<" ";
        temp=temp->next;
    }
}
void removeDuplicates(Node* head)
{
    Node* temp=head;
    while(temp->next!=NULL)
    {
        if(temp->value==temp->next->value)//deleted all duplicates in sorted manner
        {
        Node* toremove=temp->next;
        temp->next=temp->next->next;
        delete toremove;
        }
        temp=temp->next;
    }
  
}

int main()
{
    Node* n1=new Node(10);
    insertatLast(n1,20);
    insertatLast(n1,20);
    insertatLast(n1,30);
    insertatLast(n1,30);
    insertatLast(n1,40);
    insertatLast(n1,50);
    insertatLast(n1,60);
    removeDuplicates(n1);
    Display(n1);

}