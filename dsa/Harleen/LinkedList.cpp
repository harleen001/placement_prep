#include <iostream>
using namespace std;

    class Node{
        public:
        int val;
        Node* next;
        Node(int data){
            val=data;
            next=NULL;
        }
    };
int main()
{
    Node* n1=new Node(10);
    cout<<n1->val<<" "<<n1->next<<endl;
    return 0;
}