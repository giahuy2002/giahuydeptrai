#include<iostream>
#include<queue>
using namespace std;
struct Node
{
int val;
Node*left;
Node*right;
Node(int val):val(val),left(NULL),right(NULL){}
};
Node* insert(Node*root,int val)
{
Node*new_node=new Node(val);
if(!root)
{
    root=new_node;
    return root;
}
queue<Node*>q;
q.push(root);
while(!q.empty())
{
    Node*temp=q.front();
    q.pop();
    if(temp->left==NULL)
    {
       temp->left=new_node;
       return root;
    }
    else q.push(temp->left);
    if(temp->right==NULL)
    {
       temp->right=new_node;
       return root;
    }
}
}
void inorder(Node*root)
{
    inorder(root->left);
    cout<<root->val;
    inorder(root->right);
}
int main()
{
    Node*root=new Node(1);
    root->left=new Node(2);
    insert(N)
    return 0;
}