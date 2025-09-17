#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};

Node* buildTreePreorder(vector<int>& arr, int& index) {
    if (index >= arr.size() || arr[index] == -1) {
        index++;
        return NULL;
    }

    Node* root = new Node(arr[index++]);
    root->left = buildTreePreorder(arr, index);
    root->right = buildTreePreorder(arr, index);

    return root;
}

// Simple preorder traversal to verify
void printPreorder(Node* root) {
    if (!root) return;
    cout << root->data << " ";
    printPreorder(root->left);
    printPreorder(root->right);
}

void printInorder(Node* root) {
    if (!root) return;
    printInorder(root->left);
    cout << root->data << " ";
    printInorder(root->right);
}

void printPostorder(Node* root) {
    if (!root) return;
   
    cout << root->data << " ";
    printPostorder(root->right);
     printPostorder(root->left);
}

void levelorder(Node* root)
{
    queue<Node*> q;
    q.push(root);
    q.push(NULL);
    while(q.size()>0)
    {
        Node* curr=q.front();
        q.pop();
        if(curr==NULL)
        {
            cout<<endl;
           if(!q.empty())
           {
            q.push(NULL);
            continue;
           }
           else{
            break;
           }
        }
        
        cout<<curr->data<<" ";
        if(curr->left!=NULL)
        {
         q.push(curr->left);
        }
        if(curr->right!=NULL)
        {
         q.push(curr->right);
        }
    cout<<endl;
       
    }
}


int main() {
    vector<int> preorder = {1, 2, -1, -1, 3, 4, -1, -1, 5, -1, -1};
    int index = 0;

    Node* root = buildTreePreorder(preorder, index);

    cout << "Preorder of built tree: ";
    // printPreorder(root);
    // printInorder(root);
    // printPostorder(root);
    levelorder(root);
    cout << endl;

    return 0;
}
