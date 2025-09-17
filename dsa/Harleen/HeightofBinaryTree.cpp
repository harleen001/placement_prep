#include <bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* left;
    Node* right;

    Node(int value)
    {
       data=value;
       left=right=NULL;
    }
};

Node* buildTree(vector<int> &arr, int &index)
{
    if(index>=arr.size() || arr[index]==-1)
    {
        index++;
        return NULL;
    }
Node* root= new Node(arr[index++]);
root->left=buildTree(arr,index);
root->right=buildTree(arr,index);
return root;
}

void printpreorder(Node* root)
{
    if(!root)return;
    cout<<root->data<<" ";
    printpreorder(root->left);
    printpreorder(root->right);
}

int height(Node* root)
{

    if(!root)return 0;
    int result=1+max(height(root->left),height(root->right));
    return result;
}
int countnodes(Node* root)
{
    if(!root)return 0;
    return 1+countnodes(root->left)+countnodes(root->right);
}
int sumofnodes(Node* root)
{
    if(!root)return 0;
    return root->data+sumofnodes(root->left)+sumofnodes(root->right);
}
int main()
{
 vector<int> preorder = {1, 2, -1, -1, 3, 4, -1, -1, 5, -1, -1};
int index = 0;
Node* root=buildTree(preorder,index);
printpreorder(root);
cout<<height(root);
cout<<countnodes(root);
cout<<endl;
cout<<sumofnodes(root);
return 0;
}