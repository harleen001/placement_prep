#include <iostream>
using namespace std;
class Node{//making node
    public:
    int value;
    Node* next;
    Node(int data)
    {
        value=data;
        next=NULL;
    }
};

void insertHead(Node* &head,int data)//firstinsert
{
Node* newNode= new Node(data);
newNode->next=head;
head=newNode;
}

void insertLast(Node* &head,int data) //lastinsert
{
    Node* lastinsert=new Node(data);
    Node* temp=head;
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    
        temp->next=lastinsert;
}

void insertatK(Node* head, int data, int k)
{
    Node* temp=head;
    Node* newelement=new Node(data);
    int count =1;
    while(count<k-1 && temp!=NULL)
    {
        temp= temp->next;
        count++;
    }
    if(temp==NULL)
    {
        return;
    }
newelement->next=temp->next;  
temp->next=newelement; 

}
void Display(Node* head)//display element
{
     Node* temp=head;
    while(temp!=NULL)
    {
        cout<<temp->value<<" ";
        temp=temp->next;
    }
}
int main()
{
    Node* n1=new Node(10);
    Node* n2=new Node(20);
    Node* n3=new Node(40);
    Node* n4=new Node(50);
    n1->next=n2;
    n2->next=n3;
    n3->next=n4;
   Display(n1);

   
    // insertHead(n1,5);
    // Display(n1);
    // insertLast(n1,70);
    // Display(n1);
   insertatK(n1,30,3);
Display(n1);//done

    return 0;
}
