#include <iostream>
#include "treeeNode.h"
#include "queue.h"
using namespace std;



TreeNode<int>* takeInput() {
    cout << "Enter root data : ";
    int data;
    cin >> data;
    TreeNode<int>* root = new TreeNode<int>(data);
    cout << "Enter number of child of " << data << " : ";
    int num;
    cin >> num;
    for(int i = 0; i < num; i++) {
        TreeNode<int>* childRoot = takeInput();
        root -> addChild(childRoot);
    }
    return root;
}

void print(TreeNode<int>* root) {
    cout << root -> data << " : ";
    for(int i = 0; i < root -> numChild(); i++) {
        cout << root -> getChild(i) -> data << ", ";
    }
    cout << endl;
    for(int i = 0; i < root -> numChild(); i++) {
        print(root -> getChild(i));
    }
}

bool identicaltrees(TreeNode<int> *root,TreeNode<int> *root2)
{  //bool ans;
    if(root==NULL)
    {
        return false;
    }

    for(int i=0; i<root->numChild(); i++)
        { identicaltrees(root->getChild(i),root2->getChild(i));

         if(root2->getChild(i)->data!=root->getChild(i)->data)
            //largest=root->getChild(i)->data
            return false;
        }
        return true;

 }
int main() {
    TreeNode<int>* root = takeInput();
    print(root);
    TreeNode<int>* root2 = takeInput();
    print(root2);

    bool ans=identicaltrees(root,root2);

cout<<endl<<ans;
}


