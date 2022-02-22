#include <iostream>
#include "Tree Header File.h"
using namespace std;
void PrintTree(TreeNode<int> * root)
{
   cout<<root->data<<" ";
   for(int i=0;i<root->children.size();i++)
   {
     PrintTree(root->children[i]);
   }
}
int main()
{
   TreeNode<int> * root = new TreeNode<int>(1);
   TreeNode<int> * nood1 = new TreeNode<int>(2);
   TreeNode<int> * nood2 = new TreeNode<int>(3);
   TreeNode<int> * nood3 = new TreeNode<int>(4);
   TreeNode<int> * nood4 = new TreeNode<int>(5);
   root->children.push_back(nood1);
   root->children.push_back(nood2);
   root->children.push_back(nood3);
   root->children.push_back(nood4);
   PrintTree(root);
return 0;
}
